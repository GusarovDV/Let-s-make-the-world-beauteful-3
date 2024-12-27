#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, a;
    scanf ("%d",&a);
    a/1000;
    if (a>99&&a<1000)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}