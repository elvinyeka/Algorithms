#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    /*int median = a > b ? (a < c ? a : c) : (b < c ? b : c);
    printf("%d\n", median);*/

    if(a >b && a > c)
	{
		if(b > c)
		{
			printf("%d", b);
		}
		else
		{
			printf("%d", c);
		}
	}
	else if(b > a &&  b > c)
	{
		if(a > c)
		{
			printf("%d", a);
		}
		else
		{
			printf("%d", c);
		}
	}
	else if(c > a && c > b)
	{
		if(a > b)
		{
			printf("%d", a);
		}
		else
		{
			printf("%d", b);
		}
	}

    return 0;
}
