#include <stdio.h>
#include <stdlib.h>

/*Discounts
In the electronics supermarket, according to TV commercials, there is a system of discounts: of the two purchased goods, only the cost of more expensive goods is paid in full, and the other is provided free of charge. What amount is enough to pay for the purchase of three goods, if you know the price of each.

Input data: Three natural numbers a, b, c - prices of three goods (1 ≤ a, b, c ≤ 10000).

Imprint: Purchase price.
*/


int main()
{
    int a, b, c, sum;
    scanf("%d %d %d", &a, &b, &c);

    int max = a > b ? (a > c ? a :c) :(b > c ? b : c);
    int min = a < b ? (a < c ? a :c) :(b < c ? b : c);

    sum = max + min;

    printf("%d\n", sum);

    return 0;
}
