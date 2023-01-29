#include <stdio.h>
#include <math.h>

int main(void) {

	long long a, b, n;

	scanf("%lld %lld", &a, &b);

	if (a <= b) {
		n = b - a + 1;
		printf("%lld", n * (2 * a + (n - 1)) / 2);
	}
	else {
		n = a - b + 1;
		printf("%lld", n * (2 * b + (n - 1)) / 2);
	}




	return 0;
}