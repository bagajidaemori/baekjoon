#include <stdio.h>

int main(void) {

	int arr[3][5] = { 0 };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			scanf(" %d", &arr[i][j]);
			if (arr[i][j] == 0) {
				arr[i][4]++;
			}
		}
		if (arr[i][4] == 0) {
			printf("E\n");
		}
		else if (arr[i][4] == 1) {
			printf("A\n");
		}
		else if (arr[i][4] == 2) {
			printf("B\n");
		}
		else if (arr[i][4] == 3) {
			printf("C\n");
		}
		else if (arr[i][4] == 4) {
			printf("D\n");
		}
	}

	return 0;
}
