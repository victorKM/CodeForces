#include <bits/stdc++.h>

using namespace std;

int prime (int number) {
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main () {
    int n;
    int k;
    int temp;
    cin >> n;
    temp = (n/2) - 1;

    k = n/2;  

    cout << k << "\n";
    if (n % 2 == 0) {
        for (int i = 0; i < n/2; i++) {
            cout << "2 ";
        }
    }
    else {
        for (int i = 0; i < temp; i++) {
            cout << "2 ";
        }
        cout << "3";
    }
    

}