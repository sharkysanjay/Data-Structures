#include<stdio.h>
#include<conio.h>
int main()
{
    int p[30],n[30],i,size,sum=0,sum1=0;
    printf("Enter the number of elements:");
    scanf("%d",&size);
    printf("Enter the positive integer:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&p[i]);
        sum+=p[i];
    }
    printf("Enter the negative integer:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&n[i]);
        sum1+=n[i];
    }
    printf("\n %d positive number sum is %d",size,sum);
    printf("\n %d negative number sum is %d",size,sum1);
    return 0;
}
