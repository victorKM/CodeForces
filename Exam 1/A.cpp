#include <bits/stdc++.h>

using namespace std;

int main () {
    int n;
    int x;
    cin >> n >> x;
    int array[n];

    for (int i = 0 ; i < n; i++) {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (array[i] != array[j]) {
                if ((array[i] + array[j]) == x) {
                    cout << "YES" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "NO" << endl;
}