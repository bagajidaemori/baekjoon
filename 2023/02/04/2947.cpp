#include <stdio.h>

int main(void) {

	int arr[10] = { 0 };
	int temp;

	for (int i = 0; i < 5; i++) {
		scanf(" %d", &arr[i]);
	}

	for (int i = 1; i < 5; i++) {
		for (int j = 1; j < 5; j++) {
			if (arr[j] < arr[j - 1]) {
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
				for (int k = 0; k < 5; k++) {
					printf("%d ", arr[k]);
				}
				printf("\n");
			}
		}
	}

	return 0;
}