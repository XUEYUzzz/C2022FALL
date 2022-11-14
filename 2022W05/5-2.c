#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int is_sorted(int arr[], int left, int right);

void BubbleSort(int arr[], int left, int right);
int main()
{
	int a[50], i,b,c;
	srand(time(NULL));
	for (i = 0; i < 50; i++) { a[i] = rand() % 100; }
	scanf_s("%d%d", &b, &c);
	BubbleSort(a, b, c);
	is_sorted(a, b, c);
	return 0;




}
void BubbleSort(int arr[], int left, int right)
{
	int i,c, j, b = 0;
	for (i = left,c=0; i < right; i++,c++)
		for (j = left; j < right - c; j++) {
			if (arr[j] > arr[j + 1]) {
				b = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = b;
			}
		}
}
int is_sorted(int arr[], int left, int right){
			 int i, b = 0;
			for (i = left; i<right; i++)if (arr[i] <= arr[i + 1]) { b++; }
			if (b == right - left)printf("子区间符合严格单调递增");
			else printf("不符合严格单调递增");
			return 0; }