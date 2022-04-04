#include <bits/stdc++.h>

using namespace std;

int main () 
{
    int n;
    int min = 1000000000+5;
    int indice;
    int array[100000];

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> array[i];

        if (array[i] < min) {
            min = array[i];
            indice = i;
        }
    }

    cout << indice;
}