#include<stdio.h>
int sum_digit(int n)
{
    int m;
    if(n==0)
    return 0;
    else
    {
        m=n%10;
        n=n/10;
        return m+sum_digit(n);
    }
}
void main()
{
    int a,sum;
    printf("Enter the number whose sum of digits you need to find\n");
    scanf("%d",&a);
    sum=sum_digit(a);
    printf("Sum of Digits=%d",sum);
 }
    
