#include <cstdio>
#include <cstdlib>
#include <ctime>
void main()
{
	clock_t start, finish;
	double duration;
	start = clock();

	int x, y;
	int result = 0;
	printf("input x=");
	scanf("%d", &x);
	printf("input y=");
	scanf("%d", &y);

	while (1)
	{
		if (x % 2 == 1) {
			result += y;
			x = (x - 1) >> 1;
			y = y << 1;
			if (x == 0) break;
		}
		else {
			x = x >> 1;
			y = y << 1;
		}
	}
	printf("Result: %d\n", result);

	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("%f 초입니다.\n", duration);
}