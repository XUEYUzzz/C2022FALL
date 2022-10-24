//https://www.acwing.com/problem/content/description/606/
#include <stdio.h>
#define PI 3.14159
int main()
{
	double A, R;
	scanf("%lf", &R);
	A = PI * R * R;
	printf("A=%.4lf", A);
	return 0;
}