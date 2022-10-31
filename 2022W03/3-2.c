#include<stdio.h>
void triangle_judge(int, int, int);
int main()

{printf("请输入三角形三边长");
int a, b, c;
scanf_s("%d%d%d", &a, &b, &c);
triangle_judge(a, b, c);
return 0;
}
void triangle_judge(int a,int b ,int c)
{
	if (a + b > c && a + c > b && b + c > a) {
		if (a == b && b == c) printf("三角形是等边三角形");
		else if (a == b || a == c || b == c)printf("三角形是等腰三角形");
		else printf("三角形是普通三角形");
	}
	else printf("无法构成三角形");
	
}



	


