#include <bits/stdc++.h>

using namespace std;

int prime (int n) {
   for (int i = 2; i < n; i++) {
       if (n%i == 0) {
           return 0;
       }
   }

   return 1;
}

int main () {
    int n;
    cin >> n;

    for (int i = 4; i < 25000000; i++) {
        if (prime(i) == 0 && prime(i+n) == 0) {
            cout << i+n << " " << i << endl;
            return 0;
        }
    }
}