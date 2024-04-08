#include<stdio.h>
#include<math.h>

//Main Function
int main()
{
    //Variable declaraton
    int a,b,c;
    char op;
    
    //Input operator and 2 numbers
    printf("\nEnter the operation to be performed:\n");
    printf("Select from [+ - * / %%]:");
    scanf("%c", &op);
    printf("\nEnter the First number:");
    scanf("%d", &a);
    printf("\nEnter the second Number:");
    scanf("%d", &b);

    //Switch case for Calculation & Final output
    switch(op)
    {
        case '+': c = a + b;
        printf("\nThe Sum of the numbers is %d.",c);
        break;
        case '-': c = a - b;
        printf("\nThe Difference of the numbers is %d.",c);
        break;
        case '*': c = a * b;
        printf("\nThe Product of the numbers is %d.",c);
        break;
        case '/': c = a / b;
        printf("\nThe Quotient from the numbers is %d.",c);
        break;
        case '%': c = a % b;
        printf("\nThe Remainder from the numbers is %d.",c);
        break;
        default: printf("\nInvalid Operator");
        break;
    }

    //See off Message
    printf("\n\nThank you for using the program.");

    //Return
    return 0;
}
