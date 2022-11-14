#include<stdio.h>
#pragma warning(disable:4996)
struct student
{
	char name[10];
	int id;
	int grade;
};
int main()
{       
	int c=0,a,i,max=0,min=0;
	
	scanf_s("%d", &a);
	struct student stu[10]={0};

	for(i=0;i<a;i++)
	{
		scanf("%s", stu[i].name);
		scanf_s("%d", &stu[i].id);
		scanf_s("%d", &stu[i].grade);
		

	}
	for(i=1;i<a;i++)
	{
		if (stu[max].grade < stu[i].grade)max = i;
	}
	for(i=1;i<a;i++)
	{
		if (stu[min].grade > stu[i].grade)min = i;
	}
	printf("%s %d\n", stu[max].name, stu[max].id);
	printf("%s %d", stu[min].name, stu[min].id);

	return 0;

}