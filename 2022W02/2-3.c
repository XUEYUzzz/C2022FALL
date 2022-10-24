#include <stdio.h>
#include <math.h>
int main()
{
	int x,a,b,c;
	a = 1, b = 2, c = 3;
	scanf_s("%d", &x);
	if (sqrt(x) != 4 * a / (b * c))printf("x*x*x+2*x*x+3*x+1");
	return 0;

	
}