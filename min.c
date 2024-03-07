#include <stdio.h>

int main(void)
{
    //Variable declaration
    int num1, num2, num3;
    int min;

    //Prompting the user to enter three numbers and writing them to the console
    printf("Enter three numbers: \n");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Comparing the numbers to find the max
    if ((num1<num2) && (num1<num3))
    {
        // If num1 is less than both num2 and 3 then min = num1
        min = num1;
    }
    else if ((num2<num1) && (num2<num3))
    {
        // If num2 is less than both num1 and 3 then min = num2
        min = num2;
    }
    else
    {
        // If neither of the above conditions is true then num3 must be the min
        min = num3;
    }
    
    // Printing the min of three numbers
    printf("Minimun of three numbers is: %d\n", min);

    return 0;
}