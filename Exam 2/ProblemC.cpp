#include <bits/stdc++.h>
using namespace std;

int main () 
{
    int n, k;
    int alf[26] = {0};
    cin >> n >> k;
    char alfa[n];

    for (int i = 0; i < n; i++) {
        cin >> alfa[i];

        alf[(int)alfa[i]-97]++;
    }
    
    sort(alf, alf+26);


    if (alf[25] <= k) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}