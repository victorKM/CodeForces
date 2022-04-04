#include <bits/stdc++.h>

using namespace std;

int main () {
    int array_n1_n2[26];
    int array_n3[26];

    for (int i = 0; i < 26; i++) {
        array_n1_n2[i] = 0;
        array_n3[i] = 0;
    }

    int count = 0;
    string n1;
    string n2;
    string n3;
    int s1;
    int s2;
    int s3;
    int temp;

    cin >> n1;
    cin >> n2;
    cin >> n3;

    s1 = n1.size();
    s2 = n2.size();
    s3 = n3.size();

    if (s3 > (s1+s2) || s3 < (s1+s2)) {
       cout << "NO" << endl;
    }

    else {
        for (int i = 0; i < s1; i++) {
            temp = (int)n1[i];
            array_n1_n2[temp-65]++;
        }

        for (int i = 0; i < s2; i++) {
            temp = (int)n2[i];
            array_n1_n2[temp-65]++;
        }

        for (int i = 0; i < s3; i++) {
            temp = (int)n3[i];
            array_n3[temp-65]++;
        }

        for (int i = 0; i < 26; i++) {
            if (array_n1_n2[i] == array_n3[i]) {
                count++;
            }
        }

        if (count == 26) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

}