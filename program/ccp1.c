#include <stdio.h>
int main() {
   int i, j,size;
   printf("Enter the array size:");
   scanf("%d", &size);
   for (i = 1; i <=size; ++i)
   {
      for (j = 1; j <= i; ++j)
      {
         printf("%d ", j);
      }
      printf("\n");
   }
   return 0;
}
