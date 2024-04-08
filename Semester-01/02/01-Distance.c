#include<stdio.h>
#include<math.h>

//Main Function
int main()
{
    //Variable declaration
    int Time;
    float distance, accelaration, Initial_velocity;

    //Input for Acceleration, Initial Velovity & Time interval
    printf("Enter the Value of Accelaration:\n");
    scanf("%f", &accelaration);
    printf("Enter the Value of Initial Velocity:\n");
    scanf("%f", &Initial_velocity);
    printf("Enter the Value of time interval:\n");
    scanf("%d", &Time);

    //Formula for calculation
    distance = Initial_velocity * Time + 0.5 * accelaration * Time * Time;

    //Final Output
    printf("\nThe distance traveled is : %f.",distance);

    //Return
    return 0;
}
