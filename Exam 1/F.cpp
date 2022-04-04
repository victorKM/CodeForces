#include <bits/stdc++.h>
using namespace std;

int main () {
    int array[26] = {};
    int n, k, num, temp, count = 0;
    char letter;

    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> letter;
        num = (int)letter;
        array[num-65]++;
    }

    sort(array, array + 26);

    for (int i = 25; i >= 0; --i) {
        temp = array[i];
        while (k > 0 && temp > 0) {
            count += array[i];
            temp--;
            k--;
        }
    }
    cout << count;
}