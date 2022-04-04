#include <stdio.h>
#include <stdlib.h>

int main () 
{
    int n;
    int size;
    char beg;
    char final;
    scanf ("%d", &n);

    char array[n][10000];

    for (int i = 0; i < n; i++) {
        scanf ("%s", &array[i]);
    }

    for (int i = 0; i < n; i++) {
        if (strlen(array[i]) > 10) {
            size = strlen(array[i]);
            beg = array[i][0];
            final = array[i][size-1];

            printf ("%c%d%c\n", beg, size-2, final);
        }

        else{
            printf ("%s\n", array[i]);
        }
    }
}