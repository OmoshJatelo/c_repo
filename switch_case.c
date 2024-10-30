#include<stdio.h>

int main(){

    printf("1: Addition\n");
    printf("2: subtraction\n");
    printf("3: multiplication\n");
    printf("4: Division\n");
    int number1,number2,choice,sum,diff,prod;
    float quotient;
    printf("enter two integer numbers:\n");
    scanf("%d \n%d",&number1,&number2);
    printf("enter your choice: ");
    scanf("%d",&choice);

    switch(choice){
        case 1:
        sum=number1+number2;
        printf("the sum of %d and %d is %d\n\n",number1,number2,sum);
        break;
        

        case 2:
        diff=number1-number2;
        printf("the difference of %d and %d is %d\n\n",number1,number2,diff);
        break;

        case 3:
        prod=number1*number2;
        printf("the product of %d and %d is %d\n\n",number1,number2,prod);
        break;


        case 4:

        quotient=(float)number1/number2;
        printf(" %d divided %d is %f\n\n",number1,number2,quotient);
        break;

        default:
        printf("You have entered a wrong input\n\n");
        break;

    }

    

    return 0;
}
