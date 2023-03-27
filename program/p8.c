#include<stdio.h>
int main()
{
    int n,rem,reverse=0,sum=0,a,mul=1;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0)
    {
    rem=n%10;
    n=n/10;
    reverse=reverse*10+rem;
    }
    printf("\nReverse number is %d",reverse);
    for(int i=1;i<=reverse;i++)
    {
    a=reverse%10;
    reverse=reverse/10;
    sum=sum+a;
    mul=mul*a;
    }
    printf("\n sum is %d ",sum);
    printf("\n mul is %d",mul);
    return 0;
}
