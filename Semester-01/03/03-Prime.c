#include<stdio.h>

//Main function
int main()
{
    //Variable declaration
    int n, i, num, count;

    //User Input
    printf("Enter the range till which you want to find prime numbers:\n");
    scanf("%d",&n);

    //Control Flow
    //For the number to be checked 
    for(num = 1; num <= n; num++)
    {
        count = 0;

        for(i = 2; i <= num/2; i++)
        {
            if(num % i == 0)
            {
                count++;
                break;
            }
        }
        if(count==0 && num!= 1)
        {
            printf("%d ",num);
        }     
    }

    //Return 
    return 0;
}
