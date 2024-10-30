#include<stdio.h>
int main(){
    int dependants;
    float gross_pay,net_pay, tax_peyable;
    printf("\nPlease enter your Gross pay:\n");
    scanf("%f",&gross_pay);
    printf("\nPlease your number of dependants:\n");
    scanf("%d",&dependants);
    if (gross_pay>=10000 && gross_pay<=20000){
        if(dependants<3){
            tax_peyable=gross_pay*10.0/100.0;
            net_pay=gross_pay-tax_peyable;

        }
        else{
            tax_peyable=gross_pay*15.0/100.0;
            net_pay=gross_pay-tax_peyable;

        }
        printf("Gross pay:%f\nTax peyable:%f\nNet Pay:%f",gross_pay,tax_peyable,net_pay);    
    }
    else if (gross_pay>=20000){
        if(dependants<3){
            tax_peyable=gross_pay*25.0/100.0;
            net_pay=gross_pay-tax_peyable;

        }
        else{
            tax_peyable=gross_pay*35.0/100.0;
            net_pay=gross_pay-tax_peyable;

        }
        printf("Gross pay:%f\nTax peyable:%f\nNet Pay:%f",gross_pay,tax_peyable,net_pay);  
    }   
    else{
        printf("Gross pay:%f\nTax payable:=0\nNet Pay:%f\n",gross_pay,gross_pay);
    }


    return 0;
}