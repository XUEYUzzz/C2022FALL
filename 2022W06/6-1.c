#include <stdio.h>

long long max(int N)
{
	
	long long s, i;
	s = 0;
	for (i = N; i > 0; i /= 2) {
		s += (((i + 1) / 2) * ((i + 1) / 2));
	}

	return s;
}

int main(int argc, char** argv)
{
	int N;
	scanf("%d", &N);
	printf("%lld\n", max(N));

	return 0;
}

