#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));   //srand(time(0))
    int secreteNum= rand()%10 +9;
    int rounds = 0;
    int user_rounds= 0;      
    int totalScore =0;
    int userInput; //lucky number
    int remainder;
    printf("\nenter the number of rounds you want to play:\n ");
    scanf("%d", &user_rounds);
    rounds+=user_rounds;


    while (rounds>=1){
        printf("\nenter your lucky number: \n");
        scanf("%d", &userInput);
        remainder= userInput%secreteNum;

        if(remainder==0){
            printf("Good attempt, this is a draw you have earned one point. keep trying\n");
            totalScore+=1;
            
        }
        else if(remainder%2==0){
            printf("\nBingo! You smashed it. you have received additional three points\n\n");
            totalScore+=3;

        }
        else{
            printf("\n\nOops! Seems like luck was not on you side this time. you have lost three point\n keep trying, Legends never die\n\n");
            totalScore-=3;

        }

        rounds--;
              
    }

    if(totalScore>0){
        printf("Congratulations! You are the real goat.\n Keep playing to establish a legacy that will never die\n Good luck in the next round\n\n");

    }
    else{
        printf("Oops! the pot broke when you were just at the door\n Just keep trying\n\n");
    }


        
    return 0;
}