//Write a recursive function to print first N odd natural numbers in reverse order
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
    printf("\n");
    printf("%d",2*x-1);
    odd(x-1);
}

}



