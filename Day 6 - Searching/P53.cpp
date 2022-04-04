#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    int cont = 0;
    cin >> n;

    int vet[n];

    for (int i = 0; i < n; ++i) {
        cin >> vet[i];
        cont ^= vet[i];
    }

    cout << cont << "\n";
    return 0;
}