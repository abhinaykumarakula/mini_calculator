// OM NAMO VENKATESHAYA
//  AUTHOR == ABHINAY
// OBJECTIVE  = to build basic mini calculator

#include <stdio.h>

int main()
{

    int num1, num2;
    char operator, choice;

    do
    {
        printf("==== WELCOME TO BASIC CALCULATOR ====\n");
        printf("   == DEVELOPED BY ABHINAY ==\n");

        printf("enter the num1 : \n");
        scanf("%d", &num1);

        printf("enter the num2 : \n");
        scanf("%d", &num2);

        printf("choose the operator \" + , - , * , / \"\n");
        printf("now enter the operator : \n");
        scanf(" %c", &operator);

        if (operator == '+')
        {
            printf("sum is %d + %d = %d\n", num1, num2, num1 + num2);
        }
        else if (operator == '-')
        {
            printf("difference is %d - %d = %d\n", num1, num2, num1 - num2);
        }
        else if (operator == '*')
        {
            printf("product is %d * %d = %d\n", num1, num2, num1 * num2);
        }
        else if (operator == '/')
        {
            if (num2 == 0)
            {
                printf("undefined! use non zero digit as num2!\n");
            }
            printf("division is %d / %d = %d\n", num1, num2, num1 / num2);
        }
        else
        {
            printf("invalid operator!");
            printf("choose the operator \" + , - , * , / \"\n");
        }

        printf("wanna calculate again?\n");
        printf("enter \"y to yes\" or \"n to no\"\n");
        printf("now enter your choice (y/n) : \n");
        scanf(" %c", &choice);

        if (choice == 'n' || choice == 'N')
        {
            printf("exiting... \n");
            printf("thank you for using basic calculator \n");
            break;
        }
    } while (choice == 'y' || choice == 'Y');

    return 0;
}