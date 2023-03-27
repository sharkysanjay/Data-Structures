#include <stdio.h>
#include<math.h>
int main()
{
 int x,n,i,t,sum=0;
   printf("Enter the number:");
   scanf("%d",&x);
   printf("Enter the nth term:");
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
       t=pow(x,i);
       sum=sum+t;
   }
   printf("result %d",sum+1);
   return 0;
}


