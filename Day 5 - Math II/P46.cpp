#include <bits/stdc++.h>
using namespace std;

int main () 
{
    int n;
    vector <int> fib;
    fib.push_back(1);
    fib.push_back(1);
    for (int i = 2; i < 16; ++i) {
        fib.push_back(fib[i-1] + fib[i-2]);
    }  

    cin >> n;

    for (int i = 0; i < n; ++i) {
        if (find(fib.begin(), fib.end(), i+1) != fib.end()) {
            cout << "O";
        }
        else {
            cout << "o";
        }
    }
}