#include <stdio.h>
#include <stdlib.h>

int main()
{
   int month_number;
   scanf("%d", &month_number);

   switch(month_number)
   {
	case 1:
		printf("Winter"); break;
	case 2:
		printf("Winter"); break;
	case 3:
		printf("Spring"); break;
	case 4:
		printf("Spring"); break;
	case 5:
		printf("Spring"); break;
	case 6:
		printf("Summer"); break;
	case 7:
		printf("Summer"); break;
	case 8:
		printf("Summer"); break;
	case 9:
		printf("Autumn"); break;
	case 10:
		printf("Autumn"); break;
	case 11:
		printf("Autumn"); break;
	case 12:
		printf("Winter"); break;
	default:
		printf("Not a month number");
   }

    return 0;
}
