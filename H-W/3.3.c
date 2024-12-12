#include <stdio.h>

int main() 
{
    int min, mid, max;
    printf("Введите три числа: ");
    scanf("%d %d %d", &min, &mid, &max);
    {
    if (min < mid && mid < max)
        printf("YES\n");
    else
        printf("NO\n");
    }
 return 0;
}