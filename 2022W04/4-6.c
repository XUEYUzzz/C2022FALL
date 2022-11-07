//https://www.acwing.com/problem/content/description/3646/
#include<stdio.h>
int step(int a);
int main()
{
	 int n, c;
	scanf_s("%d", &n);
	c = step(n);
	printf("%d", c);

	return 0;

}
int step( int a) {
	if (a== 1) return 1;
	if (a == 2)return 2;
	if (a == 3) return 4;
	if (a > 3); return step(a - 1) + step(a - 2) + step(a - 3);
	
	
	

}