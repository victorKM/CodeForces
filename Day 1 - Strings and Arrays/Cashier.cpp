#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int clients;
    int day_duration;
    int smoke_break;
    int arrive;
    int duration;
    int before = 0;
    int breaks = 0;

    cin >> clients >> day_duration >> smoke_break;

    for (int i = 0; i < clients; i++) {
        cin >> arrive >> duration;
        
        breaks += (arrive-before)/smoke_break;
        before = arrive + duration;
    }

    cout << breaks + ((day_duration - before)/smoke_break) << endl;
}