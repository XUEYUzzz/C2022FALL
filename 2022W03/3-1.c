#include<stdio.h>
int main()
void triangle_judge(int,int, int);
{printf("���������������߳�");
int a, b, c;
scanf_s("%d%d%d", &a, &b, &c);
triangle_judge(int a, int b, int c);
return 0;
}
void triangle_judge(int a.int b, int c)
{
	if (a + b > c && a + c > b && b + c > a) {
		if (a == b && b == c) printf("�������ǵȱ�������");
		else if (a == b || a == c || b == c)printf("�������ǵ���������");
		else printf("����������ͨ������");
	}
	else printf("�޷�����������");
	return;
}

