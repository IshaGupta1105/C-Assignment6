//WAP to check whether a given number is a prime number or not.
#include<stdio.h>

int main()
{
    int i,n,flag=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Number is prime.\n");
    }
    else
    {
        printf("Number is not prime.\n");
    }
    return 0;
}