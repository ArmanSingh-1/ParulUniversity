#include <stdio.h>
#include<math.h>

//Main function
int main()
{
    //Variable declaration
    int a = 0, b = 1;
    int n, sum, i;

    //Input about number of terms
    printf("Enter the number of terms to be displayed:\n");
    scanf("%d", &n);

    //Final Result 
    printf("\nThe first %d terms of Fibonacci Series are:",n);

    //For loop
    for(i = 1; i < n; i++)
    {
        //refence to the sequence number and printing them
        printf("\n%d Term = %d", i, a);
        //Finding the next terms of the series
        sum  = a + b;
        //Changing values of  variable for next round of loop
        a = b;
        b = sum;
    }

    //Return
    return 0;
}