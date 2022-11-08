//https://www.acwing.com/problem/content/766/
#include<stdio.h>;
#include<string.h>;
int main()
{
	int i, k, a, b,d;
	char s[1000], c[1000];
	gets_s(s);
	a = strlen(s);
	for (i = 0; i < a; i++)
	{
		if (i < a - 1)c[i] = s[i] + s[i+1];
		if (i == a - 1) {
			c[i] = s[i] + s[0]; break;
		}
	}
	for (d = a; d <= 999; d++) { c[d] = 0; }
	printf("%s", c);
	return 0;
}


