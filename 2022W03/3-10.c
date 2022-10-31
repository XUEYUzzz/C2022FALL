//https://www.acwing.com/problem/content/674/
#include<stdio.h>
int main()
{
	double n,a,b,c;
	scanf("%lf", &n);
	if (n <= 2000)printf("Isento");
	else if (n > 2000 && n <= 3000) { a = (n-2000)* 0.08; printf("R$ %.2lf", a); }
	else if (n > 3000 && n <= 4500) { b =(n-3000) * 0.18+80; printf("R$ %.2lf", b); }
	else { c =(n-4500) * 0.28+0.18*1500+80; printf("R$ %.2lf", c); }
	return 0;
}

