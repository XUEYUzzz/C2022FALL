#include<stdio.h>
int GCD_recursive(int m, int n);
inr main()
{
	int m, n, d;
	scanf_s("%d%d", &m, &n);
	d = GCD_recursive(m, n);
	printf("%d", d);
	return 0;
}
int GCD_recursive(int m, int n) {
	if (m < n)m = n;
	if (m % n == 0)return n;
	else return   GCD_recursive(n, m % n);

}








	


