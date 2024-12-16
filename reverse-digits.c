#include<stdio.h>

int reverse_number(int num)
{
    int last_digit, reversed_number=0;
    if(num>0)
    {
        while(num!=0)
        {
            last_digit=num%10;
            reversed_number=reversed_number*10 + last_digit;
            num/=10;
        }
    }
    else if(num<0)
    {
         num=-num;
        while(num!=0)
        {
            last_digit=num%10;
            reversed_number=reversed_number*10 + last_digit;
            num/=10;
        }
        reversed_number=-reversed_number;
    }
    

    else
    {
        reversed_number=0;
    }

    return reversed_number;
}


int main()
{
    int num,number_reversed;
    printf("please enter a number to see its reverse:\n");
    scanf("%d",&num);
    number_reversed=reverse_number(num);
    printf("the reverse of the number is %d\n",number_reversed);

    return 0;
}