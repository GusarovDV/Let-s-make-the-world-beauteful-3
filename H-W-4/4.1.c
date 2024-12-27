#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2, i,sum;
    sum=0;
    while (1)
    {
    printf("Введите два целых числа (по модулю не больше 100) так, чтобы первое было меньше второго\n ");
    scanf("%d %d", &num1, &num2);
    
    if (abs(num1) < 100 && abs(num2) < 100 && num1 < num2 ) 
    {
        printf("Вы ввели: %d и %d\n", num1, num2);
        for(i=num1; i<=num2; i++)
        { 
        
        sum+=i*i;
        }
    break;
    } 
    else 
    {
         printf("Ошибка: оба числа должны быть по модулю не больше 100, или первое число больше второго.\n");
    }
    }
    printf("Сумма квадратов чисел находящихся в диапозоне: (%d;%d) = %d\n", num1, num2,sum);
return 0;
}