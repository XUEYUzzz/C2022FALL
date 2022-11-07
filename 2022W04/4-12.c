//https://www.acwing.com/problem/content/816/
#include<stdio.h>
int main()
{
	int a, b, c, d, e[100], f[100],g,h,i;
	scanf_s("%d%d%d", &a, &b,&d);
	for (c = 0; c < a; c++)scanf_s("%d", &e[c]);
	for (g = 0; g < b; g++)scanf_s("%d", &f[g]);
	for (h = 0; h < d; h++) { f[h] = e[h]; }
	for (i = 0; i < b; i++)printf("%d ", f[i]);
	return 0;


}