//https://www.acwing.com/problem/content/3453/
#include<stdio.h>;
#include<string.h>;
int main()
{
	int i, k, a, b;
	char s[20];
	scanf("%s", s);
	a = strlen(s);
	for (i = 0; i < a; i++)
		for (k = 0; k < a - i - 1; k++)
		{
			if (s[k] > s[k + 1]) { b = s[k]; s[k] = s[k + 1]; s[k + 1] = b; }
		}
	puts(s);
	return 0;


}