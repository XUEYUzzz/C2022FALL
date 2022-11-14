#include<stdio.h>
#include<string>
void swap(char n[], int a);
int main()
{
	char a[1000] = { 0 }, b[1000] = { 0 };
	int c[1000]={0}, n1, n2;
	int len1, len2, max, i;
	gets_s(a);
	gets_s(b);
	len1 = strlen(a);
	len2 = strlen(b);
	max = len1 > len2 ? len1:len2;
	for (i = 0; i < max; i++) {
		if (i > len1)a[i] = '0';
		if (i > len2)b[i] = '0';
		n1 = a[i] - '0';
		n2 = b[i] - '0';
		c[i] = n1 + n2;
		c[i + 1] = (n1 + n2) / 10;
		c[i] = (n1 + n2) % 10;

	}
	if (c[i] == 0)i--;
	for (; i >= 0; i--)
		printf("%d", c[i]);
	return 0;


}
void swap(char n[], int a)
{
	int i;
	char c;
	for (i = 0; i < a / 2; i++)
	{
		c = n[i];
		n[i] = n[a - 1 - i];
		n[a - 1 - i] = c;

	}
	return;
}




