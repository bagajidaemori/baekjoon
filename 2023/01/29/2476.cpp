#include <stdio.h>

int main(void) { 
	int n, arr[3] = { 0 };
	int max_n = 0, max_m;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		max_m = 0;
		scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
		if (arr[0] == arr[1] && arr[1] == arr[2]) {
			if (max_n < 10000 + 1000 * arr[0])
				max_n = 10000 + 1000 * arr[0];
		}
		else if (arr[0] == arr[1]) {
			if (max_n < 1000 + 100 * arr[0])
				max_n = 1000 + 100 * arr[0];
		}
		else if (arr[1] == arr[2]) {
			if (max_n < 1000 + 100 * arr[1])
				max_n = 1000 + 100 * arr[1];
		}
		else if (arr[0] == arr[2]) {
			if (max_n < 1000 + 100 * arr[0])
				max_n = 1000 + 100 * arr[0];
		}
		else {
			for (int j = 0; j < 3; j++) {
				if (max_m < arr[j]) {
					max_m = arr[j];
				}
			}
			if (max_n < 100 * max_m) {
				max_n = 100 * max_m;
			}
		}
	}

	printf("%d\n", max_n);

	return 0; 
}