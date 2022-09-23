//7. Write a recursive function to print squares of first N natural numbers
#include<stdio.h>
void square(int);
int main()
{
    int k;
    printf("Enter the value of number you want to print= ");
    scanf("%d",&k);
    square(k);
    return 0;
}
void square(int x)
{
    if(x>=1)
    {
    square(x-1);
    printf("\n");
    printf("%d",x*x);

    }

}
