//1. Write a recursive function to print first N natural numbers
#include<stdio.h>
void natural(int);
int main()
{
    int k;
    printf("Enter the value of number you want to print= ");
    scanf("%d",&k);
    printf("\n");
    natural(k);
    return 0;
}
void natural(int x)
      {
    if(x>1)
    {
     natural(x-1);
    }
     printf("\n");
    printf("%d",x);



    }

