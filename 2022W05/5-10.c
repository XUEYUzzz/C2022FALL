#include<stdio.h>
int my_strlen(const char* str);
int main()
{
	int xueyu;
	char* a[] = { "wish u happy natsu" };
	xueyu = my_strlen(*a);
	printf(" %d", xueyu);
	return 0;

   
	
}
int my_strlen(const char* str)
{
	int c=0;
	while(*str!='\0')
	{
		c++;
		*str++;
	}
	return c;
}