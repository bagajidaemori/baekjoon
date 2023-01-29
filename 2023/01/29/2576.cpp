#include <stdio.h>

int main(void) {

	int arr[10] = { 0 };
	int min = 200000000;
	int count = 0;

	for (int i = 0; i < 7; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] % 2 == 1) {
			if (arr[i] < min) {
				min = arr[i];
			}
			count += arr[i];
		}
	}
	if (count == 0) {
		printf("-1\n");
	}
	else {
		printf("%d\n%d\n", count, min);
	}
	

	return 0;
}