#include<stdio.h>
#include<conio.h>
int main()
{
    int age,weight;
    printf("Enter the Age:");
    scanf("%d",&age);
    printf("Enter the weight in kg:");
    scanf("%d",&weight);
    if(age>18 && age<=55 && weight>45)
    {
     printf("your are eligible to donate blood");
    }
    else
        printf("your are not eligible ");
    return 0;
}

