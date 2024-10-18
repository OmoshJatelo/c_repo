#include<stdio.h>

int main(){
    char choice;
    char admissionNo[27];
    char surname[48];
    float scoreA, scoreB,scoreC,scoreD,avg;
    char f[]="Fail";
    char grade;

    do{
  
        
         printf("\nplease enter your admisssion number:\n");
        scanf("%s", &admissionNo);

        printf("\nplease enter your surname:\n");
        scanf("%s", &surname);

        printf("\nplease enter your score in subject A:\n");
        scanf("%f", &scoreA);
        printf("\nplease enter your score in subject B:\n");
        scanf("%f", &scoreB);
        printf("\nplease enter your score in subject C:\n");
        scanf("%f", &scoreC);

        avg= (scoreA+scoreB+scoreC)/3;
        
        if(avg>=70){
            grade = 'A';
            printf("\nsurname:%s\nRegistration number:%s\nscore in subject A:%f\nscore in subject B:%f\nscore in subject C:%f\nYour average mark is:%f\nYour final grade is :%c\n",surname,admissionNo, scoreA, scoreB,scoreC,avg,grade);
            
        }

        

        else if(avg>=60){
            grade= 'B';
            printf("\nsurname:%s\nRegistration number:%s\nscore in subject A:%f\nscore in subject B:%f\nscore in subject C:%f\nYour average mark is:%f\nYour final grade is :%c\n",surname,admissionNo, scoreA, scoreB,scoreC,avg,grade);
            
        }

        else if(avg>=50){
            grade= 'C';
            printf("\nsurname:%s\nRegistration number:%s\nscore in subject A:%f\nscore in subject B:%f\nscore in subject C:%f\nYour average mark is:%f\nYour final grade is :%c\n",surname,admissionNo, scoreA, scoreB,scoreC,avg,grade);
        }

        else if(avg>=40){
            grade= 'D';
            printf("\nsurname:%s\nRegistration number:%s\nscore in subject A:%f\nscore in subject B:%f\nscore in subject C:%f\nYour average mark is:%f\nYour final grade is :%\n",surname,admissionNo, scoreA, scoreB,scoreC,avg,grade);
            
        }

        else{
            //grade="Fail";
            printf("\nsurname:%s\nRegistration number:%s\nscore in subject A:%f\nscore in subject B:%f\nscore in subject C:%f\nYour average mark is:%f\nYour final grade is :%s\n",surname,admissionNo, scoreA, scoreB,scoreC,avg,f);
        }

        printf("\npress 'y' to continue or 'N'to stop:\n");
        scanf(" %c",&choice); 

        
    }while(choice=='y'||choice=='Y');
    
    printf("\nExited the program successfully\n");
        
    return 0;
}