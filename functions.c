#include <stdio.h>

int summation (int num1, int num2)
{
     
    int sum=num1+num2;
    return sum;
}

int main()
{
    int num1,num2;
    printf("please enter two integer numbers\n");
    scanf("%d%d", &num1,&num2);      
    printf("the sum of the two numbers is %d\n",summation( num1, num2));
    return 0;

}