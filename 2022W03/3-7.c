#include<stdio.h>
int GCD_iterative(int m, int n);
int main()
{
	int m, n;
	scanf_s("%d%d", &m, &n);
	GCD_iterative(m, n);
	return 0;



}
int GCD_iterative(int m, int n) {
	int d, c;
	if (m < n)m = n;
	if (m % n == 0)d = n;
	else for (d = m % n; d != 0; ) { 
		if (n % d == 0)break;
		c = n % d;
		n = d;
		d = c;

	}
	printf("%d", d);
	return 0;

}








	


