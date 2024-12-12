#include <stdio.h>

int main() 
{
    int m;
    printf("Enter the month nomber: ");
    scanf("%d", &m);
    if (m < 1 || m > 12) 
    {
        printf("Your namber is not correct.\n");
        return 0;
    }
    if (m == 12 || m == 1 || m == 2) 
    {
        printf("winter\n"); 
    } else if (m >= 3 && m <= 5) 
    {
        printf("spring\n");
    } else if (m >= 6 && m <= 8) 
    {
        printf("summer\n");
    } else {
        printf("autumn\n");
    }

    return 0;
}