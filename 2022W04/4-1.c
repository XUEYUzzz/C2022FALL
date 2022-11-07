#include<stdio.h>
int min(int a, int b);
int main()
{
	int a[13], b[13];
	int i, j,c,d;
	a[0] = 0;
	for(i=1;i<=12,i++)
	{
		a[i] = 2 * a[i - 1] + 1;
	}
	for (j = 1; j <= 12; j++)
		for£¨c = 1; c <=j;c++)
		{b[j]=min(a[j],b[c]+a[j-c])}
	for (d = 1; d <= 12; d++)
		printf("%d\n", b[d]);
	return 0;




}
int min(int a,int b)
{
	int c;
	c = a < b ? a : b;
	return c;
}