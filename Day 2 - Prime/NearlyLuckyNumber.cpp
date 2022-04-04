#include <bits/stdc++.h>

using namespace std;

int main () {
    string n;
    cin >> n;
    int k = n.size();
    int count = 0;

    for (int i = 0; i < k; i++) {
        if (count <= 7) {
            if (n[i] == '4' || n[i] == '7') {
                count++;
            }
        }
        else {
            cout << "NO" << endl;
            return 0;
        }
    }

    if (count == 4 || count == 7) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}