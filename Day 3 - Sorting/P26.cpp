#include <bits/stdc++.h>

using namespace std;

int main () {
    int n;
    int min = 0;
    int temp;
    int indice;
    cin >> n;

    int array[n+5];

    for (int i = 1; i <= n; i++) {
        cin >> array[i];
    }

    for (int i = 1; i < n; i++) {
        min = array[i];
        for (int j = i; j <= n; j++) {
            if (array[j] <= min) {
                min = array[j];
                indice = j;
            }
        }

        temp = array[i];
        array[i] = min;
        array[indice] = temp;

        for (int i = 1; i <= n; i++) {
            cout << array[i] << " ";
        }
        cout << "\n";
    }

}

/*
7
6 4 2 3 1 0 5
*/