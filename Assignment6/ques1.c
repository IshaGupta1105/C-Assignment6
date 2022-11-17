//WAP to calculate sum of first N natural numbers.
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the number of terms:\n");
    scanf("%d",&n);
    printf("The numbers are:");
    for(i=1;i<=n;i++)
    {  
        printf(" %d ",i);  
        sum=sum+i;
    }
    printf("\nThe sum of first %d natural number is : %d\n",n,sum);
    return 0;
}