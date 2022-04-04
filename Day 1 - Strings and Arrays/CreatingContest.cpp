#include <bits/stdc++.h>

using namespace std;

int a[200005];

int main () {
    int n;
    int max = 1;
    int count = 1;
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    for (int i = 0; i < n-1; i++) {
        if (2*array[i] < array[i+1]) {
            count = 1;
        }
        else {
            count++;
        }

        if (count > max) {
            max = count;
        }
    }
    cout << max;
}

/*
6
4 7 12 100 150 199

array[0] = 4
array[1] = 7
array[2] = 12
array[3] = 100
array[4] = 150
array[5] = 199

*/