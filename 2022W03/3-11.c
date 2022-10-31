//https://www.acwing.com/problem/content/description/727/
#include<stdio.h>
#include<math.h>
int main()
{
	long int n,i,b,c,sum=0;
	long a[100];
	scanf_s("%ld", &n);
	
	for (i = 0; i <= n - 1; i++)
		scanf_s("%ld",&a[i]);
	for (c = 0; c <= n - 1; c++) {
		if (a[c] == 6 || a[c] == 28 || a[c] == 496 || a[c] == 8128 || a[c] == 33550336)printf("%ld is perfect", a[c]);
		else printf("%ld is not perfect", a[c]);
		
		printf("\n");
	}
	return 0;
	

}