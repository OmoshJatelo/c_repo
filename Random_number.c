#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int random_no;
    srand(time(0));       //seed the random number generator

    random_no=rand()%10 +2;   // generate a random number between 1 and 11

    printf("Rnandom number:%d\n\n",random_no);  //Display the random number


    return 0;
}