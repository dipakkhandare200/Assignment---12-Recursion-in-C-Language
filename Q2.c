//2. Write a recursive function to print first N natural numbers in reverse order
#include<stdio.h>
void natural(int);
int main()
{
    int k;
    printf("Enter the value of number you want to print= ");
    scanf("%d",&k);
    natural(k);
    return 0;
}
void natural(int x)
{
    if(x<=0)
    {
    return;
    }
    else
    {
    printf("\n");
    printf("%d",x);
    natural(x-1);


    }

}
