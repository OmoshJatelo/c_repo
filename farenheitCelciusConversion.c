#include <stdio.h>
//#include <ctype.h>

int main(){
    
float celcious;
float faren;
printf("enter the temperature in Farenheit");
scanf("%f", &faren);
celcious= (faren -32) * 5.0/9.0;
printf("\nThe temperature in degrees celcious is %f ,\n", celcious);




    return 0;
}