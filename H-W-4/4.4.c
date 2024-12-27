#include <stdio.h>

int main() {
    int number, reversedNumber = 0;

    printf("Введите целое неотрицательное число: ");
    scanf("%lld", &number);
    while (number > 0) {
        reversedNumber = reversedNumber * 10 + number % 10;
        number /= 10; 
    }
    printf("Перевернутое число: %lld\n", reversedNumber);
    return 0;
}