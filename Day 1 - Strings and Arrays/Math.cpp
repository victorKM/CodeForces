#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    char temp;
    int size_s;
    int number_symbol;
    int count = 0;

    cin >> s;
    size_s = s.length();
    number_symbol = (size_s/2);

    sort(s.begin(), s.end());

    for (int i = number_symbol; i < size_s; i++) {
        if (i == size_s-1) {
            cout << s[i];
        }

        else {
            cout << s[i] << "+";
        }
    }
}