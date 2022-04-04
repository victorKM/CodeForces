#include <bits/stdc++.h>

using namespace std;

int main () {
    int t;

    int hour, minutes;
    int total;

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> hour >> minutes;
        total = (hour*60) + minutes;
        cout << 1440 - total << "\n";
    }
}