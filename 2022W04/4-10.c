//https://www.acwing.com/problem/content/742/
#include<stdio.h>
int main()
{
	int a[20], i, j, c, d;
	for (i = 0; i < 20; i++)scanf("%d", &a[i]);
	for (j = 0; j < 10; j++) { c = a[j], a[j] = a[20 - j - 1], a[20 - j - 1] = c; }
	for (d = 0; d < 20; d++)printf("N[%d] = %d\n", d, a[d]);
	return 0;

}