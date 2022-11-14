#include<stdio.h>
#include<string>
void k_reverse(char* str, int k);
int main()
{
	char a[10];
	int  b, i, j;
	gets_s(a);
	scanf_s("%d", &b);
	k_reverse(a, b);
	return 0;





}
void k_reverse(char* str, int k)
{int i,j, b,c,d;
b = strlen(str); c = b;
   for (i = 0;; i=i+k)
   {
	   if (b < k) {
		   d = b % k;
		   for (j = i; j <= d + i - 1; j++)putchar(str[j]); break;
	   }
	   if (b >= k) {
		   for (j = i + k - 1; j >= i; j--)putchar(str[j]);
		   b = b - k;
	   }

   }
	  
   return;
   }
	   

	   




