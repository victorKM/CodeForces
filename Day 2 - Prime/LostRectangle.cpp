#include <bits/stdc++.h>

using namespace std;

int main () {
    long long A;
    long long min = -1;

    cin >> A;

    for (long long i = 1; i <= sqrt(A); i++) {
        if (A % i == 0) {
           if (min == -1) {
               min = 2*((A/i) + i);
           }
           else if (2*((A/i) + i) < min){
               min = 2*((A/i) + i);
           }
        }
    }
    cout << min;
}