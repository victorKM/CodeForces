#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 10000005

long long count1;
long long x[N];

int main () {
    ll n;
    ll contador_superprimos = 0;
    count1 = 0;
    cin >> n;

    for (int i = 2; i <= n; i++) {
        x[i] = 1;
    }
    
    for (int i=2; i <= sqrt(n); ++i) {
        if (x[i] == 1) {
            for (int j = i*i; j <= n; j+=i) {
                x[j] = 0;
            }
        }
    }
     
    for (int i = 3; i <= n; i++) {
        if (x[i]) {
            int sum = 2+i;
            if (sum <= n) {
                if (x[sum]) {
                    contador_superprimos++;
                }
                else if (sum > n) {
                    break;
                }
            }
        }
    }

    cout << contador_superprimos << endl;
}