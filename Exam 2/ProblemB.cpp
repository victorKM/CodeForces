#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, count, ans;
    cin >> n;
    int keyboard[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> keyboard[i];
    }

    sort (keyboard, keyboard + n);
    ans = keyboard[n-1] - keyboard[0] + 1 - n;

    cout << ans;

    return 0;
}