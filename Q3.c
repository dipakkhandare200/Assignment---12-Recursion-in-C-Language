//3. Write a recursive function to print first N odd natural numbers
void odd(int);
int main()
{
    int k;
    printf("Enter the value of number you want to print= ");
    scanf("%d",&k);
    odd(k);
    return 0;
}
void odd(int x)
{
    if(x<=0)
    {
    return;
    }
    else
    {
    odd(x-1);
    printf("\n");
    printf("%d",2*x-1);



    }

}

