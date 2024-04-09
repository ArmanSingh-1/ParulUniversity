#include<stdio.h>
#include<math.h>

//Main function
int main()
{
    //Variable declaration and initialization
    int num, sum = 0;

    //Numerical Input
    printf("\nEnter the Number whose digits are to be added:\n");
    scanf("%d", &num);

    //While loop till num = 0
    while(num != 0)
    {
        //Adding the last digit of the num to sum
        sum = sum + (num % 10);
        //Removing the last digit from num
        num = num/10;
    }

    //Final Output
    printf("\nThe sum of all the digits of the number is %d.",sum);

    //return
    return 0;
}