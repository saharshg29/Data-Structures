#include <stdio.h>

int main()
{
    int n;
    
   scanf("%i", &n);
   
   for (int i=1; i<=n; i++) {
       for (int j = 1; j<=n; j++) {
           for (int k = 1; k<=n; k++) {
               if (i == j && j==k) {
                   printf("%i", i*j);
               }
           }
       }
   }

    return 0;
}
