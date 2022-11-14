#include<stdio.h>
int my_strcmp(const char* str1, const char* str2);
int main()
{
	char a[100], b[100];
	gets_s(a);
	gets_s(b);
	printf("%d", my_strcmp(a, b));


	return 0;

}
int my_strcmp(const char* str1, const char* str2)
{
	while ((*str1 == *str2) && (*str1 != '\0') && (*str2 != '\0')) {
		*str1++;
		*str2++;
	}
	if ((*str1 - *str2) > 0)return 1;
	else if ((*str1 - *str2) < 0)return -1;
	else return 0;
}