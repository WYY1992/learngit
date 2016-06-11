#include <stdio.h>
//declare
// add another comments
// git add
void sum(int m);

void main ()
{
	int n = 0;
	sum(50);
	for (int i = 0; i<=50; i++)
		n += i;
	printf("The sum of 1-50 is %d \n", n);
}

void sum(int m)
{
	int i,n = 0;
	for (i = 0; i <= m; i++)
		n += i;
	printf("The sum of 1~%d is %d", m, n);
}
