#include <stdio.h>
int main()
{
	int a,b,c,n;
	scanf_s("%d%d%d", &a, &b, &c);
	 
	long int e = 1,d;
	for (n = 1; n <= b; n++)
		e=e*a;

	d = e%c;
		printf("ำเสýสว%ld\n", d);
	return 0;
}