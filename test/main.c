#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 0, a, b;

    scanf("%d", &number);

    a = number/10;
    b = number%10;
    printf("%d %d", a, b);
    return 0;
}
