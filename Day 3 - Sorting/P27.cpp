#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    int count;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        count = 0;

        for (int j = 0; j <= i; j++) {
            if (a[j] >= a[i]) {
                count++;
            }
        }

        cout << count << endl;
    }

    sort (a, a+n);

    for (int i = n-1; i >= 0; --i) {
        cout << a[i] << " ";
    }
}