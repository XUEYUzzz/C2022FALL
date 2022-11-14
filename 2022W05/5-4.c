#include<stdio.h>
void InsertionSort(int arr[], int left, int right);
int main()
{
	int a[10], i, left, right;
	for (i = 0; i <= 9; i++)
		scanf_s("%d", &a[i]);
	scanf_s("%d%d", &left, &right);
	InsertionSort(a, left, right);
	return 0;



}
void InsertionSort(int arr[], int left, int right)
{
	int i, b, j;
	for (i = left + 1; i <= right; i++)
		for (j = i - 1; j >= left; j--)
		{
			if (arr[j+1] < arr[j]) { b = arr[j+1]; arr[j+1] = arr[j]; arr[j] = b; }
		}
	for (i = left; i <= right; i++)
		printf("%d", arr[i]);
	return;

}