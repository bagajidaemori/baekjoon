#include <stdio.h>

int main(void) {

	int arr[10][10] = { 0 };
	int max = 0;
	int a, b;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf(" %d", &arr[i][j]);
			if (max <= arr[i][j]) {
				max = arr[i][j];
				a = i + 1;
				b = j + 1;
			}
		}
	}

	printf("%d\n", max);
	printf("%d %d\n", a, b);

	return 0;
}
