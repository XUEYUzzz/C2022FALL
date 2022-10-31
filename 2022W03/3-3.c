#include<stdio.h>
#include<string.h>
void print_hex(int a);
int main()
{
	int a;
	printf("请输入十进制数字");
	scanf_s("%d", &a);
	print_hex(a);
	return 0;
}
void print_hex(int a)
{
	int i, n;
	char c[10];
	for (i = 0; a != 0; i++)
	{
		if (a % 16 == 10) c[i] = 'A';
		else if (a % 16 == 11)c[i] = 'B';
		else if (a % 16 == 12)c[i] = 'C';
		else if (a % 16 == 13)c[i] = 'D';
		else if (a % 16 == 14)c[i] = 'E';
		else if (a % 16 == 15)c[i] = 'F';
		else c[i] = (a % 16)+'0';
		a = a / 16;
	}
	c[i] = '\0';
	for (i = strlen(c) - 1; i >= 0; i--)
		printf("%c", c[i]);
	
	return;
}



	    









	


