#include <bits/stdc++.h>

using namespace std;

int prime(int n) 
{
   if (n == 0 || n == 1) {
       return 0;
   }

   if (n == 2 || n == 3) {
       return 1;
   }

   for (int i = 2; i <= n/2; ++i) {
     if (n % i == 0) {
       return 0;
     }
  }

  return 1;
}

int main () {
    int n;
    int count_primes = 0;
    int count_divisors = 0;

    cin >> n;

    for (int i = 2; i <= n; i++) {
        count_divisors = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                if (prime(j) == 1) {
                    count_divisors++;
                }
            }
        }
        if (count_divisors == 2) {
            count_primes++;
        }
    }

    cout << count_primes << endl;
}