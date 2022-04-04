#include <stdio.h>
#include <math.h>

int main ()
{
    int n;
    int temp;

    scanf ("%d\n", &n);
    int array[n];
    int r = n-1;

    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n/2; i++) {
        temp = array[i];
        array[i] = array[r];
        array[r] = temp;
        r--;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
}