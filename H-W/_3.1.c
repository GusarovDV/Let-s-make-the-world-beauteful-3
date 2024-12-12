#include <stdio.h>

int main() 
{
    int numbers[5];
    int max; 
    printf("Введите пять целых чисел, разделенных пробелами: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
        }
    max = numbers[0];
    for (int i = 1; i < 5; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    printf("Наибольшее число: %d\n", max);
    return 0;
}
