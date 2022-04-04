#include <bits/stdc++.h>

using namespace std;

int main () {
    string n;
    int size;

    cin >> n;
    size = n.size();

    for (int i = 0; i < size; i++) {
        if (n[i] == 'a') {
            n[i] = '4';
        }
        else if (n[i] == 'i') {
            n[i] = '1';
        }
        else if (n[i] == 'e') {
            n[i] = '3';
        }
        else if (n[i] == 'o') {
            n[i] = '0';
        }
        else if (n[i] == 's') {
            n[i] = '5';
        }
    }

    cout << n;
}