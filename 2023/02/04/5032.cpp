#include <stdio.h>

int main(void) {

	int e, f, c, a;
	int sum = 0, temp, tempM, tempR = 0;

	scanf("%d %d %d", &e, &f, &c);
	a = e + f;
	while (1) {
		a = a + tempR;
		if (a / c < 1)
			break;
		sum += a / c;
		tempR = a % c;
		a /= c;
	}
	printf("%d\n", sum);

	return 0;
}