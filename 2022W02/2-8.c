#include <stdio.h>
#include <time.h>
int pow(int x, int y);
int main()
{
	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);
	long int d;
	clock_t start_clock, end_clock;
	double elapsed_time;
	int i;
	start_clock = clock();
	for (i = 1; i <= 1000000000; ++i);
		d = pow(a, b) % c;
		printf("ำเสýสว%ld\n", d);
	end_clock = clock();
	elapsed_time = (double)(end_clock - start_clock) / CLOCKS_PER_SEC;
	printf("%.6lf", elapsed_time);
	return 0;
	
}
int pow(int x, int y)
{
	int z=1, n;
	for (n = 1; n <= y; n++)
		z = z * x;
	return z;

}