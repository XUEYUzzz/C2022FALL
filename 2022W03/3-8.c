#include<stdio.h>
#include<string.h>
void reverse(char* str);
int main()
{
	char a[1000];
	gets_s(a);
	reverse(a);
	return 0;



}
void reverse(char* str) {
	
	int i,c;
		
		c=strlen(str);
		for(i=c-1; i>= 0; i--) {
			printf("%c", str[i]);
		}
		printf("\n");
		return;
	                                    


}








	


