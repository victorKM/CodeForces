#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int count = 0;
    cin >> n;
    string numero;
    cin >> numero;

    for (int i = 0; i < (numero.size()); i++) {
        if (numero[i] == '8') {
            count++;
        }
    }

    if ((n/11) > count) {
        cout << count;
    }

    else if (count >= (n/11)) {
        cout << (n/11);
    }

    else {
        cout << 0;
    }

    return 0;

}