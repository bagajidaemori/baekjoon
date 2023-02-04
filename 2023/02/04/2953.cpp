#include <stdio.h>

int main(void) {

	int arr[5] = { 0 };
	int N;
	int sum;
	int max = 0;
	int count;

	for (int i = 0; i < 5; i++) {
		sum = 0;
		for (int j = 0; j < 4; j++) {
			scanf(" %d", &N);
			sum += N;
		}
		if (max < sum) {
			max = sum;
			arr[i] = max;
		}
	}

	for (int i = 0; i < 5; i++) {
		if (max == arr[i]) {
			printf("%d %d\n", i + 1, max);
		}
	}

	return 0;
}