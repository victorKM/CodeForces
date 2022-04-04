#include <bits/stdc++.h>

using namespace std;


int funcao (int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }

    return count++;
}


int main () {
    int n;
    int sum = 0;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += funcao(i);
    }

    cout << sum;
}