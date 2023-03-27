#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter the number calls:");
    scanf("%d",&n);
    if(n<100)
     printf("%d calls is Rs.50",n);
    else if (n>99 && n<200)
        printf("Price of calls is:%d",n*1);
    else if(n>199 && n<300)
        printf("Price of calls is:%d",n*2);
    else if(n>300)
        printf("price of calls:%d",n*3);
    return 0;
}
