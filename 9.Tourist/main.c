#include <stdio.h>
#include <stdlib.h>

/*
Tourist
John is going to a tourist meeting of pupils in his school. In his class he was made responsible for the tents. At home he found 3 tents: the first one weighs a1 kilograms and accommodates b1 people, the second tent weighs a2 kilograms and accommodates b2 people, the third tent weighs a3 kilograms and accommodates b3 people.

There are k pupils in John's class. Find out if John can choose tents such that all people can fit in them. Take into account that the selected tents should weigh no more than w kilograms in total.

Input
The first line contains two integers k and w (1 ≤ k ≤ 15, 1 ≤ w ≤ 30). The second line contains six integers: a1, b1, a2, b2, a3, b3 (1 ≤ a1, a2, a3 ≤ 10, 1 ≤ b1, b2, b3 ≤ 15).

Output
Print YES if it is possible to choose tents as desired, and NO otherwise.
*/

int main()
{

	int k, w;
	scanf("%d %d", &k, &w);

	int a1, b1, a2, b2, a3, b3;
	scanf("%d %d %d %d %d %d", &a1, &b1, &a2, &b2, &a3, &b3);

	if((a1 <= w && b1 >= k) || (a2 <= w && b2 >= k) || (a3 <= w && b3 >= k) || ((a1+a2) <= w && (b1+b2) >=k)||((a1+a3) <=w && (b1+b3) >= k) || ((a2+a3) <=w && (b2+b3) >= k) ||(a1 +a2 + a3) <= w && (b1 + b2 + b3) >= k)
		printf("YES");
	else
		printf("NO");

    return 0;
}
