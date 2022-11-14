#include<stdio.h>
void my_strcpy(char* dest, const char* src);
int main()
{
	char a[100], b[100];
	gets_s(a);
	my_strcpy(b, a);
	puts(b);
	return 0;

}
void my_strcpy(char * dest, const char * src)
{
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = *src;
	return;
}