#include <stdio.h>

int main(){

    float cred_lim,total_cost,price;
    int n,quantity,customers ;
    printf("\nenter number of customers:\n");
    scanf("%d",&customers);
    printf("\nenter the price:\n");
    scanf("%f",&price);
    n=0;
    while(n<=customers)
    {
        printf("Welcome our deer customer\nenter your credit limit:\n");
        scanf("%f",&cred_lim);
        printf("enter the quantity you would like to purchase:\n");
        scanf("%d",&quantity);
        total_cost=price*quantity;
        while(total_cost>cred_lim){
            printf("Sorry,you cannot purchase goods worth such a %f on credit\nplease enter a reduced quantity of purchase:\n",total_cost);
            scanf("%d",&quantity);
            total_cost=price*quantity;
        }
        printf("Thank you for purchasing goods worth %f from us\n",total_cost);   
        n++;


    }

    

    return 0;
}