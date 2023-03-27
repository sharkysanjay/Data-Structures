#include<stdio.h>
#include<conio.h>
int cubes(int c);
int main()
{
    int n,result;
    printf("Enter the number from 1 to 10:");
    scanf("%d",&n);
    result=cubes(n);
}
int cubes(int c)
{
    int r;
    r=c*c*c;
    printf("Values are:%d",r);
    return 0;
}
