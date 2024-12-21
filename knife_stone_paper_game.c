#include <stdio.h>
#include<stdlib.h>
#include <time.h>
#include <ctype.h>

char get_computer_choice()
{
    
    int random_number=rand()%3;
    if(random_number==0)
        return 'S';   
    else if(random_number==1)
        return 'K';
    else
        return 'P';
    
}
char get_user_choice()
{
    char user_input; 
    printf("Hey there! Welcome to the pro game of the Knife, stone and paper\n Enter 's' for stone, 'p' for paper or 'k' for knife:\n");
    scanf(" %c",&user_input);
    user_input=toupper(user_input);
   
    while ((user_input!='S')&&(user_input!='P')&&(user_input!='K'))
    {
        printf("invalid input! Please enter K, S or P");
        printf("enter your choice:\n");
        scanf(" %c",&user_input);
        user_input=toupper(user_input);
        
    }
    return user_input;
  
    
}
void obtain_winner(char computer_choice,char user_choice)
{
    printf("You chose: %c\n", user_choice);
    printf("Computer chose: %c\n", computer_choice);
   
    if((user_choice=='K'&& computer_choice=='P')|| 
       (user_choice=='P'&& computer_choice=='S')||
       (user_choice=='S'&& computer_choice=='K'))
    {
        printf("\nFlying high like an eagle! you win\n\n");
    }
    else if(user_choice==computer_choice)
    { 
        printf("\n That's a draw. Keep trying\n");
    }
    else
    {
        printf("Oops! The computer won. try again in the next round\n");
    }


}
int main()
{
    srand(time(NULL)); //initialize the random number with current time so the comp does not use th same value each time
    
    char user_choice=get_user_choice();
    char computer_choice=get_computer_choice();
    obtain_winner(computer_choice,user_choice);

    return 0;
}