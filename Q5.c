//5. Write a recursive function to print first N even natural numbers
void even(int);
int main()
{
    int k;
    printf("Enter the value of number you want to print= ");
    scanf("%d",&k);
    even(k);
    return 0;
}
void even(int x)
{
    if(x>=1)
    {
    even(x-1);
    printf("\n");
    printf("%d",2*x);
    }

}

