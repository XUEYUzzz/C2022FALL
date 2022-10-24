https://www.acwing.com/problem/content/719/
#include<stdio.h>
int main()
{
	int i, n, a = 0, b = 1, c;
	scanf_s("%d", &n);
	for(i=1;i<= n;i++)
	{ printf("%d ", a);
	c = a + b;
	a = b;
	b = c; }
	return 0;
}
