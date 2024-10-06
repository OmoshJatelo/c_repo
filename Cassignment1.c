
/*create a program that
prompts the user for two numbers, adds
the numbers and then displays the output*/




#include <stdio.h>

int main() {

    int number1, number2, sum;
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2); // reads the two numbers entere by the user and stores them in the 
    sum = number1 + number2;            // number1 and number2 variables. & tells scanf where to store the integers
    printf("The sum of %d and %d is : %d\n", number1, number2, sum);


    return 0;
}