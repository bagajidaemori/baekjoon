#include <stdio.h>

int main(void) {

	long long a, b, n;

	scanf("%lld %lld", &a, &b);

	if (a <= b) {
		n = b - a;
	}
	else
		n = a - b;
	printf("%lld", n);

	return 0;
}