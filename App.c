#include <stdio.h>
#include <ctype.h>

void option1();
void option2();
void option3();


int main(){
//     printf("hello world");
    int choice;

    while (1) {
        // Display menu
        printf("\nMenu:\n");
        printf("1. Option 1\n");
        printf("2. Option 2\n");
        printf("3. Option 3\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Handle user choice
        switch (choice) {
            case 1:
                option1();
                break;
            case 2:
                option2();
                break;
            case 3:
                option3();
                break;
            case 4:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
void option1() {
    printf("You selected Option 1.\n");
    char unit;
	float temp;
tempconverter:

	printf("\n Which unit do you want to use for temperature (F) or (C)?: ");
	scanf(" %c", &unit);
    unit = toupper(unit);

	if (unit == 'C')
	{
		printf("\nThe temp is in C!");
        printf("\nEnter the temp in Celsius: ");
        scanf(" %f", &temp);
        temp=temp*9/5+32;
        printf("\nThe temp in Farenheit is: %.2f", temp);
	}
	else if (unit == 'F')
	{
		printf("The temp is in F!");
        printf("\nEnter the temp in Farenheit: ");
        scanf(" %f", &temp);
        temp= ((temp - 32) *5) / 9;
        printf("\nThe temp in Celsius is: %.2f", temp);
	}
	else
	{
		printf("\n %c is not a valid unit of messurement", unit);
        goto tempconverter;
	}
}

void option2() {
    char operator;
    double num1;
    double num2;
    double result;

    printf("You selected Option 2.\n");
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
}

void option3() {
    printf("You selected Option 3.\n");
    // TODO
}
