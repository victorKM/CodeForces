#include <bits/stdc++.h>

using namespace std;

int main () {
    int n;
    long long ans;
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    
    if (n < 4) {
        cout << 0 << endl;
    }
    else { 
        sort (array, array+n);
        cout << 1ll*array[n-4]*array[n-4];
    }
 
    
}

