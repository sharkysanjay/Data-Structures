#include<stdio.h>
#include<conio.h>
int main()
{
    int w1,w2,total=0;
    printf("Enter the work mark out of 50:");
    scanf("%d",&w1);
    printf("Enter the written marks out of 50:");
    scanf("%d",&w2);
    total=w1+w2;
    if(total>=45)
    {
        if(w1>=20 && w2>=20)
            printf("passed");
        else
            printf("failed");
    }
    else
        printf("fail");
    return 0;
}
