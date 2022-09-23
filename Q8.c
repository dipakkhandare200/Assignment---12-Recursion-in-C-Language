//8. Write a recursive function to print binary of a given decimal number
#include <stdio.h>

int binary(int n)
{
    if (n==0)
        return 0;
    else
        return ((n%2)+10*binary(n/2));
}

void main()
{
   int no;

   printf("Enter a decimal number\n");
   scanf("%d",&no);
   printf("Decimal(%d) = Binary(%d)\n",no,binary(no));
}




