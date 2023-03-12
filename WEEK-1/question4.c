#include <stdio.h>

void main() {
    float num1, num2, result;
    int choice;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter decond number: ");
    scanf("%d", &num2);

    printf("Enter operations to perform:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
        result = num1 + num2;
        printf("Addition of two numbers is:%d", result);
        break;
        
        case 2:
        result = num1 - num2;
        printf("Substraction of two numbers is:%d", result);
        break;

        case 3:
        result = num1 * num2;
        printf("Multiplicaion of two numbers is:%d", result);

        case 4:
        if(num2 == 0) {
            printf("Error: Division by zero");
        }
        else {
            result = num1 / num2;
            printf("Division of two nubers is:%d", result);
        }
        break;
        default:
        printf("Invalid choice");
    }

}