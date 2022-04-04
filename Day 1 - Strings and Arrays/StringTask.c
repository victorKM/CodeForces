#include <stdio.h>
#include <stdlib.h>


int main() 
{
   char s[100];
   char stemp[100];
   int size;
   int sizetemp;
   int count = 0;

   scanf ("%s", &s);
   size = strlen(s);

   for (int i = 0; i < size; i++) {
       s[i] = tolower(s[i]);
   }

   for (int i = 0; i < size; i++) {
       if (s[i] != 'a' && s[i] != 'o' && s[i] != 'y' && s[i] != 'e' && s[i] != 'u' && s[i] != 'i') {
          stemp[count] = s[i];
          count++;
       }
   }
   
   for (int i = 0; i < count; i++) {
       printf (".%c", stemp[i]);
   }
}