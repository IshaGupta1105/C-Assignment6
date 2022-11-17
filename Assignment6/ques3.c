//WAP to calculate sum of first N odd natural numbers.
#include<stdio.h>

int main()
{
    int n,i,sum=0;
    printf("Enter number of terms:\n");
    scanf("%d",&n);
    printf("The numbers are:");
    for(i=1;i<=n;i++)
    {
        printf(" %d ",2*i-1);
        sum=sum+(2*i-1);
    }
    printf("\nThe sum of %d odd natural number is: %d",n,sum);
    return 0;
}