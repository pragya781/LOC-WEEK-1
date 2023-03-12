#include <stdio.h>

int main() {

    double num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 0.0){
        if (num == 0.0)
        printf("you entered zero.");
        else
        printf("you entered a negative number.");
    }
    else
    printf("you entered a posiive number.");

    return 0;
}