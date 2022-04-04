#include <stdio.h>

int main() 
{
   int n;
   int ans = 0;
   int left, right;
   scanf("%d\n", &n);

   int kids[n];
   for (int i = 0; i < n; i++) {
     scanf("%d ", &kids[i]);
   }

   printf("\n");

   scanf ("%d", &left);
   scanf ("%d", &right);

   for (int i = left; i <= right; i++) {
       ans += kids[i];
   }

   printf ("%d", ans);
}