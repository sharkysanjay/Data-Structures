#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    for(i=7;i<=100;i++)
     if (i%4==0 && i%5==4 && i%6==4)
     {
         printf("The values are:%d",i);
         return 0;
    }
}
