#include<stdio.h>
#include<conio.h>
int main()
{
    int n,r1,r=0,sum,mul;
    printf("Enter the natural number:");
    scanf("%d",&n);
    while(n!=0)
    {
     r1=n%10;
     r=r*10+r1;
     n=n/10;
    }
     printf("Reverse number are:%d",r);
     r=r%10;
     n=n/10;
     sum=sum+r;
     mul=mul*r;
     printf("Addition=%d and multiplication=%d",sum,mul);
     return 0;
}




