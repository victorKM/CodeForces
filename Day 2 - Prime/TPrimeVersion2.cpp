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
        int num;
        int count = 0;
     
        cin >> n;
        
        for (int i = 0; i < n; i++) {
            cin >> num;
            count = 1;
     
            if (num == 1 || num == 2 || num == 3) {
                cout << "NO" << "\n";
            }
     
            else {
                for (int i  = 1; i <= ceil(num/2); i++) {
                    if (num % i == 0) {
                       count++;
                    }
                }
                if (prime(num) == 1 && count <= 3) {
                    cout << "YES" << "\n";
                }
                else {
                    cout << "NO" << "\n";
                }
            }
        }
    }