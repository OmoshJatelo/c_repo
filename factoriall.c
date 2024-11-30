#include<stdio.h>

long long int factorial(int num)
{
    
    if (num<0)
    {
        printf(" the factorial of a negative number does not exist\n");
        return -1;
    }
    if(num==0|| num==1)
    {
        return 1;
    }
    return num*(factorial(num-1));


}

int main()
{
    int num;
    printf("Enter a number to find its factorial\n");
    scanf("%d",&num);
    printf("the factorial is %lld",factorial(num));
    return 0;

}