#include <stdio.h>

int main() {
    int number1, number2, number3, max_number;
    max_number = number1;
    printf("Enter 3 number:");
    scanf("%d%d%d", &number1, &number2, &number3);

    if(number2 > number1)  {
        max_number = number2;
    }

    if (max_number < number3) {
        max_number = number3;
    }
    printf("Biggest number is %d", max_number);
    return 0;
}