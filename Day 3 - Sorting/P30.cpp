#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    int a, b, c, r;
    int left, right;
    int begin, end;
    int start,final;

    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c >> r;
        left = c-r;
        right = c+r;
        begin = min(a,b);
        end = max(a,b);
        start = max(begin, left); 
        final = min(end, right);


        
    }
}