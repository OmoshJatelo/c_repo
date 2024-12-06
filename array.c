#include <stdio.h>


int main()
{
    int numbers[5];
    int i;   
    for(i=0;i<5;i++)
    {
        printf("enter the number:\n");
        scanf("%d",&numbers[i]);            
    }
    display(numbers,5);
    get_min(numbers,5);
    get_max(numbers,5);


    return 0;
}
/*Create a function that displays the elements of array*/
void display(int arry[],int n)
    {
       int x; 
       for(x=0;x<n;x++) 
       {
        printf("%d\n",arry[x]);
       }       
    }

/*Create a function that finds the minimum number from the array*/
void get_min(int arry[],int n)
{
    int y;
    int min_number=arry[0];
    for(y=1;y<n;y++)
    {
        if(arry[y]<min_number)
        {
            min_number=arry[y];
        }
        else
        {
            min_number=min_number;
        }
    }
    printf("the minimum number is %d",min_number);
}

/*Create a function that finds the maximum number from the array*/
void get_max(int arry[],int n)
{
    int y;
    int max_number=arry[0];
    for(y=1;y<n;y++)
    {
        if(arry[y]>max_number)
        {
            max_number=arry[y];
        }
        else
        {
            max_number=max_number;
        }
    }
    printf("\nthe maximum number is %d\n",max_number);
}