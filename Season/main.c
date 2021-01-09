#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    scanf("%d", &number);
    if(number > 0 && number < 3 || number == 12)
	{
		printf("Winter");
	}
	else if(number >= 3 && number < 6)
	{
		printf("Spring");
	}
	else if(number >= 6 && number < 9)
	{
		printf("Summer");
	}
	else if(number >= 9 && number <12)
	{
		printf("Autumn");
	}
    return 0;
}
