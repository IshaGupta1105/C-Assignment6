//WAP to calculate sum of squares of first N natural number.
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
        sum=sum+i*i;
    }
    printf("\nThe sum of squares of first %d natural number is : %d\n",n,sum);
    return 0;
}