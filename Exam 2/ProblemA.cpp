#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,x;
    int sum = 0;
    int count = 0;
    int flag = 0;
    cin >> n >> x;
    int days[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> days[i];
    }

    for (int i = 0; i < n; ++i) {
        sum += days[i];
        count++;

        if (sum >= x) {
            cout << count << endl;
            flag = 1;
            break;
        }
    }

    if (flag != 1) {
        cout << "-1" << endl;
    }

    return 0;
}