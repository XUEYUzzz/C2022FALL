#include<stdio.h>
void SelectionSort(int arr[], int left, int right);
int main()
{
	int a[10], i, left, right;
	for (i = 0; i <= 9; i++)
		scanf_s("%d", &a[i]);
	scanf_s("%d%d", &left, &right);
	SelectionSort(a, left, right);
	return 0;



}
void SelectionSort(int arr[], int left, int right)
{
	int i, j, k, b, min;
	for (i = left; i <= right; i++)
	{
		min = i;
		for(j=i+1;j<=right;j++)
		{
			if (arr[min] > arr[j])min = j;
		}
		b = arr[i]; arr[i] = arr[min]; arr[min] = b;

	}
			
	for (k = left; k <= right; k++)
		printf("%d", arr[k]);
	return;
}