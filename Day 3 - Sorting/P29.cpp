#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    int colors[3];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> colors[0] >> colors[1] >> colors[2];

        sort(colors, colors+3);

        if (colors[2] <= (colors[1]+colors[0]+1)) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }

        cout << "\n";
    }
}