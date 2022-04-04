#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int fib[41];
    int n;
    fib[0] = 1;
    fib[1] = 1;
    for (int i = 2; i < 41; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    cin >> n;
    

    cout << fib[n] << endl;
    return 0;
}