#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int result, a, b;
    scanf("%lli %lli", &a, &b);
    result = (a*a) + (b*b);
    printf("%lli\n", result);
    return 0;
}
