#include <bits/stdc++.h>
using namespace std;

int main () 
{
    int n;
    long long int sum = 1;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        sum *= i;
    }

    cout << sum << endl;

    return 0;
}