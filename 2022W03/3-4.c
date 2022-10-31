#include<stdio.h>
int is_pow2(int n);
int main()
{
	int n;
	scanf_s("%d", &n);
	is_pow2(n);
	return 0;
}
int is_pow2(int n)
{
	char a[10000];
	int i,  k,c=0;
	for(i=0;n!=0;i++)
	{
		a[i] = n % 2 + '0';
		if (a[i]=='1')c++;
		n = n >> 1;
	}
	if (c==1) printf("0");
	if (c>1) printf("-1");
	return 0;
	
}

	    









	


