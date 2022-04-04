    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main () {
        int n;
        long long count = 0;
        long long zero_count = 0;
        long long sum_less_zero_numbers = 0;
        int less_zero = 0;
        int greater_zero = 0;
        cin >> n;
     
        int array[n];
     
        for (int i  = 0; i < n; i++) {
            cin >> array[i];
            if (array[i] == 0) {
                count += 1;
                zero_count++;
            }
            else if (array[i] < 0) {
                less_zero++;
                sum_less_zero_numbers += (-1)*(array[i]+1);
            }
            else {
                count += array[i]-1;
            }
        }
     
        if (less_zero % 2 == 0) {
           count += sum_less_zero_numbers;
        }
        else if (zero_count > 0 && less_zero % 2 != 0){
            count += sum_less_zero_numbers;
        }
        else{
            count += sum_less_zero_numbers + 2;
        }
     
        cout << count;
     
     
     
     
     
     
     
     
    }