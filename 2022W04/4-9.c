//https://www.acwing.com/problem/content/818/
#include<stdio.h>

int main()
{
	int a, c=0,i, j, b,e;
	scanf_s("%d%d", &a, &b);
	int d[1000];
	for (j = 0; j < a; j++)scanf_s("%d", &d[j]);
	if (b % 2 == 0) { for (i = 0; i < b / 2; i++)c = d[i], d[i] = d[b - 1 - i], d[b - 1 - i] = c; }
	if (b% 2 == 1) {
		for (i = 0; i < (b - 1) / 2; i++)c = d[i], d[i] = d[b - 1 - i], d[b - 1 - i] = c;
	}
	for (e = 0; e < a; e++)printf("%d ", d[e]);
	return 0;

	
}
