#include <bits/stdc++.h>
using namespace std;
#define ll long long
int prime (ll n) {
    for (int i  = 2; i*i <= n; i++) {
        if (n % i == 0) {
            return 1;
        } 
    }

    return 0;
}

int main () {
    int n;
    cin >> n;
    ll num;
    
    for (int i = 1; i <= n; i++) {
        cin >> num;
        ll temp  = (int)sqrt(num);
        if (num == 1) {
            cout << "NO" << endl;
        }

        else {
            
            if (prime(temp) == 0 && temp*temp == num) {
                cout << "YES" << "\n";
            }
            else {
                cout << "NO" << "\n";
            }
        }
    }
}