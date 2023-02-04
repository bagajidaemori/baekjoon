#include <stdio.h>

int main(void) {

	int sum = 0;
	int arr[12] = { 0 };
	int N;

	for (int i = 0; i < 9; i++) {
		scanf(" %d", &arr[i]);
		sum += arr[i];
	}

	sum -= 100;

	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (sum == arr[i] + arr[j]) {
				arr[i] = 0;
				arr[j] = 0;
				break;
			}
				
		}
		if (arr[i] == 0)
			break;
	}

	for (int i = 0; i < 9; i++) {
		if (arr[i] != 0)
			printf("%d\n", arr[i]);
		else
			continue;
	}

	return 0;
}