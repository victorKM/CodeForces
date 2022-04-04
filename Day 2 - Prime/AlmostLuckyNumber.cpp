#include <bits/stdc++.h>
#include <string>

using namespace std;

/*
4
7
44
47
74
77
444
447
474
477
777
774
747
744
*/
int main () {
    string n;
    stringstream ss;
    int number;
    int array[15] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 777, 774, 774, 747, 744};
    int count = 0;

    cin >> n;
    ss << n;
    ss >> number;

    int size = n.size();

    for (int i = 0; i < size; i++) {
        if (n[i] == '4' || n[i] == '7') {
           count++;
        }
    }

    if (count == size) {
        cout << "YES" << endl;
    }
    else {
        for (int i = 0; i < 15; i++) {
            if (number % array[i] == 0) {
                cout << "YES" << endl;
                return 0;
            }
        }
        cout << "NO" << endl;
    }
}