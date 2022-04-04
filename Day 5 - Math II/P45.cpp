/*
se o numero é par, divide ele por dois
se o numero é impar, triplica ele e adiciona um
*/

#include <bits/stdc++.h>
using namespace std;

long long ans (long long n)
{
    if (n == 1) {
        cout << "1" << endl;
        return 1;
    } 

    if (n % 2 == 0) {
       cout << n << endl;
       n = n/2;
       ans(n);
    }
    else {
        cout << n << endl;
        n = (n*3) + 1;
        ans(n);
    }
}

int main ()
{
   long long n;
   cin >> n;

   ans(n);

   return 0;
}