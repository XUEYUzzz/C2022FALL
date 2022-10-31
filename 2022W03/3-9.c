//https://www.acwing.com/problem/content/658/
#include<stdio.h>
int main()
{
	int a, b, c,  d, e, f,  h, i, j, k, l;
	double g,o,m;
	double n;
	scanf("%lf", &n);
	a = n / 100;
	b = (n - 100 * a) / 50;
	c = (n - 100 * a - 50 * b) / 20;
	d = (n - 100 * a - 50 * b - 20 * c) / 10;
	e = (n - 100 * a - 50 * b - 20 * c - 10 * d) / 5;
	f = (n - 100 * a - 50 * b - 20 * c - 10 * d - 5 * e) / 2;
	g = n - 100 * a - 50 * b - 20 * c - 10 * d - 5 * e - 2 * f;
	h = g / 1.0;
	
	o = g -h*1.0;

	i = o/0.5;
	j = (o - 0.5 * i)/0.25;
	k = (o - 0.5 * i - 0.25 * j)/0.10;
	l = (o- 0.5 * i - 0.25 * j - 0.10 * k)/0.05;
	m = (o-0.5*i-0.25*j-0.10* k-0.05*l)/0.01;
	
	printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%1.0lf moeda(s) de R$ 0.01\n", a, b, c, d, e, f, h, i, j, k, l,m);

	return 0;


}








	


