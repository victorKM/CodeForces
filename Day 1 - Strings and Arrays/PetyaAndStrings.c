#include <stdio.h>
#include <stdlib.h>

int main () {
    char w1[200];
    char w2[200];

    scanf ("%s\n", &w1);
    scanf ("%s", &w2);

    printf ("%d", stricmp(w1, w2));
}