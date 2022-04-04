#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    int i;
    cin >> n;

    int array[n];
    for(i=0;i<n;i++){
        cin>>array[i];
    }

    sort(array,array+n);

    for(i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    
}