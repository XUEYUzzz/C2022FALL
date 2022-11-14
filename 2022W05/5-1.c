#include<stdio.h>
int is_sorted(int arr[], int left, int right);
int main()
{
	int a[10], i, left, right;
	for (i = 0; i < 10; i++)scanf_s("%d", &a[i]);
	scanf_s("%d%d", &left, &right);
	is_sorted(a, left, right);
	return 0;

}
int is_sorted(int arr[], int left, int right) {
	int i,b=0;
	for (i = left; i < right; i++)if (arr[i] <= arr[i + 1]) { b++; }
	if(b==right-left)printf("子区间符合严格单调递增");
	else printf("不符合严格单调递增");
	return 0;
}
