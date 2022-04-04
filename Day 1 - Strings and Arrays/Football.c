#include <stdio.h>
#include <stdlib.h>

int main() {
    char time[100];
    int size;
    int temp1;
    int count;
    char temp;
    scanf ("%s", &time);

    size = strlen(time);

    for (int i = 0; i < size; i++){
        count = 0;
        temp1 = i;
        temp = time[i];

        while (time[temp1] == temp && temp1 < size) {
            count++;
            temp1++;
        }

        if (count >= 7) {
            printf("YES");
            return 0;
        }
    }

    printf ("NO");
}


