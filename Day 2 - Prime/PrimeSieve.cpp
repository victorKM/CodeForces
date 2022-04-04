#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 10000005

long long n;
long long count1;
long long x[N];

int main () {
    cin >> n;

    for (int i=2; i <= sqrt(n); ++i) {
        if (x[i] == 0) {
            for (int j = i*i; j <= n; j+=i) {
                x[j] = 1;
            }
        }
    }
    
    count1 = 0;
    for (int i = 2; i <= n; ++i) {
        if (x[i] == 0) {
            count1++;
        }
    }
    
    cout << count1 << endl;

    for (int i = 2; i <= n; ++i) {
        if (x[i] == 0) {
            cout << i << " ";
        }
    }
}