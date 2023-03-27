#include<stdio.h>
#include<conio.h>
int main()
{
    int age;
    printf("Enter the age:");
    scanf("%d",&age);
    if(age>=18)
     printf("your eligible to vote ");
    else
        printf("your not eligible to vote");
    return 0;
}
