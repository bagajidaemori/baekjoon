#include <stdio.h>

int main(void) {

	int arr[3] = { 0 };

	while(1) {
		scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

		if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0) {
			break;
		}
		else if (arr[2] - arr[1] == arr[1] - arr[0]) {
			printf("AP %d\n", arr[2] + (arr[2] - arr[1]));
		}
		else
			printf("GP %d\n", arr[2] * (arr[2] / arr[1]));
	}

	return 0;
}