#include<stdio.h>
void main()
{
    int a;

    printf("Enter the value of a = ");
    scanf("%d",&a);

    if(a%2==0)
    {
        printf("number is even");
    }
    if(a%2!=0)
    {
        printf("number is odd");
    }
}
