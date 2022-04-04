#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    int sum = 0;
    int sum1 = 0;
    cin >> n;

    int vet[n-1];

    for (int i = 1; i <= n; i++) {
        sum1 += i;
    }

    for (int i = 0; i < n-1; ++i) {
        cin >> vet[i];
        sum += vet[i];
    }

    cout << sum1 - sum << endl;

    return 0;
}