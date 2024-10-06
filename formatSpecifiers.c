#include <stdio.h>

int main() { 

    float item1 = 5900;
    float item2 =3500;
    float item3 = 100;
    float item4 =590;

    printf("item 1: Ksh.%8.2f\n",item1);        //use of format specifer to customize the format of the output
    printf("item 2: Ksh.%8.2f\n",item2);         //the %f is used to insert the valeu of the variable at that point
    printf("item 3: Ksh.%8.2f\n",item3);         // we use %f because we are displaying a float data type
    printf("item 4: Ksh.%8.2f\n\n",item4);         //the 8 0r 6 before the % sign is just for adding the number of spaces you want to
                                                 

    printf("item 1: Ksh.%-6.3f\n",item1);        //add before the Ksh and the actual value
    printf("item 2: Ksh.%-6.3f\n",item2);        //the negative sign is used to right align the values. leaving it without a sign will left align them
    printf("item 3: Ksh.%-6.3f\n",item3);
    printf("item 4: Ksh.%-6.3f\n",item4);





    return 0;
}