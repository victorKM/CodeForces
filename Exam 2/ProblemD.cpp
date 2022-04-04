#include <bits/stdc++.h>
using namespace std;

int main ()
{
   long long int x, fib[45];
   cin >> x;

   fib[0] = 0;
   fib[1] = 1;

   for (int i = 2; i < 45; i++) {
       fib[i] = fib[i-1] + fib[i-2];
   }

   for (int i = 0; i < 45; i++) {
       for (int j = 0; j < 45; j++) {
           if (x == fib[i] + fib[j]) {
               cout << "yes" << endl;
               return 0;
           }
       } 
   }

   cout << "no" << endl;
   return 0;
}