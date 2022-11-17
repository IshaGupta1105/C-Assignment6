//WAP TO COUNT DIGITS IN A GIVEN NUMBER.
#include<stdio.h>

int main()
{
    int n,count=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("The number of digits in a given number is %d.\n",count);
    return 0;
}