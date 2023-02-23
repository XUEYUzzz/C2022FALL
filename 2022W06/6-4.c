#include<stdio.h>
int main()
{
	int a = 1, b = 2;
	int c, d;
	c = (a & b) && a;
	d = (a && b) & a;
	printf(("%d%d", c, d));
	return 0;
}