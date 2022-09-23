//9. Write a recursive function to print octal of a given decimal number
#include <stdio.h>

void conversionFunc(int);

int main()
{
  int deciNum;

  printf("Enter a Decimal number: ");
  scanf("%d", &deciNum);

  printf("Equivalent Octal Value: ");
  conversionFunc(deciNum);

  return 0;
}
void conversionFunc(int decimal)
{
  if (decimal> 0)
  {
    conversionFunc(decimal/ 8);
    printf("%d", decimal % 8);
  }
}
