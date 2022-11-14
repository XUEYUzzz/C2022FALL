#include<stdio.h>
int main() {
	int n, max, i, j, num = 1, a[20][20] = { 0 }, c = 0, k = 0;
	scanf_s("%d", &n);
	max = n * n;
	while (c <= max)
	{
		i = 0; j = 0;
		for (i += c, j += c; j< n - c; j++) {
			if (c > max)break; a[i][j] = num++;
		}
		for (j--, i++; i < n - c; i++)
		{
			if (c > max)break; a[i][j] = num++;
		}
		for (i--, j--; j >= c; j--)
		{
			if (c > max)break; a[i][j] = num++;
		}
		for (j++, i--; i >= c + 1; i--)
		{
			if (c > max)break; a[i][j] = num++;
		}
		c++;

	}
	for (i = 0; i <= n - 1; i++)
		for (j = 0; j <= n - 1; j++)
		{
			
			printf("%d ", a[i][j]);
			k++; if (k % n == 0)printf("\n");
		}
	return 0;
}