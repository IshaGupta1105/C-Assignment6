//WAP to calculate LCM of two numbers.
#include<stdio.h>

int main()
{
    int x,y,i;
    printf("Enter the two number:");
    scanf("%d %d",&x,&y);
    for(i=1;i<=x*y;i++)
    {
        if((i%x==0)&&(i%y==0))
        {
            printf("LCM of %d and %d is %d.",x,y,i);
            break;
        }
    }
    return 0;
}