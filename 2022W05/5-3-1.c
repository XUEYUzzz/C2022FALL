#include<stdio.h>;
int binary_search_recursive(int arr[], int left, int right, int query);
int main()
{
	int a[10],i, d, b, c;
	for (i = 0; i < 10; i++)scanf_s("%d", &a[i]);
	scanf_s("%d%d%d", &b, &c, &d);
	binary_search_recursive(a, b, c, d);
	return 0;



}
int binary_search_recursive(int arr[], int left, int right, int query)
{
	int mid, i, j, k,a=0;
	
	while (1) {
		mid = (left + right) / 2; 
		if (arr[mid] = query) { a = mid; break; }
		if (arr[mid] < query) { left = mid + 1; }
		if (arr[mid] > query) { right = mid - 1; }

	}
	if (a == 0)printf("-1");
	if (a != 0)printf("%d", a+1);
	return 0;
}