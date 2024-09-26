#include <stdio.h>
#include <ctype.h>


int main(){
//     printf("hello world");
// 	char unit;
// 	float temp;
// tempconverter:

// 	printf("\n Which unit do you want to use for temperature (F) or (C)?: ");
// 	scanf(" %c", &unit);
//     unit = toupper(unit);

// 	if (unit == 'C')
// 	{
// 		printf("\nThe temp is in C!");
//         printf("\nEnter the temp in Celsius: ");
//         scanf(" %f", &temp);
//         temp=temp*9/5+32;
//         printf("\nThe temp in Farenheit is: %.2f", temp);
// 	}
// 	else if (unit == 'F')
// 	{
// 		printf("The temp is in F!");
//         printf("\nEnter the temp in Farenheit: ");
//         scanf(" %f", &temp);
//         temp= ((temp - 32) *5) / 9;
//         printf("\nThe temp in Celsius is: %.2f", temp);
// 	}
// 	else
// 	{
// 		printf("\n %c is not a valid unit of messurement", unit);
//         goto tempconverter;
// 	}

char operator;
double num1;
double num2;
double result;


    
calculator:
    printf("\n Enter an operator! (+ - * /): ");
    scanf(" %c", &operator);

    printf("\nEnter Number 1!: ");
    scanf(" %lf", &num1);
    printf("\nEnter Number 2!: ");
    scanf(" %lf", &num2);

    switch (operator)
    {
    case '+':
        result= num1+num2;
        printf("\n The result is: %.1lf!", result);
        break;
    case '-':
        result= num1-num2;
        printf("\n The result is: %.1lf!", result);
        break;
    case '*':
        result= num1*num2;
        printf("\n The result is: %.1lf!", result);
        break;
    case '/':
        result= num1/num2;
        printf("\n The result is: %.1lf!", result);
        break;
    default:
        printf("\n %c is Not a valid operator! \nGive a new one! :", operator);
        goto calculator;
    }
    return 0;
}
