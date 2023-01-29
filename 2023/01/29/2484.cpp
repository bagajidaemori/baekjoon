#include <stdio.h>

int main(void) {

	int n, arr[4] = { 0 };
	int max = 0, max_c, max_1;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int count[4] = { 0 }, countn = 0;
		max_c = 0; max_1 = 0;
		scanf("%d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3]);
		for (int j = 0; j < 4; j++) {
			if (arr[0] == arr[j]) {
				count[0]++;
			}
			if (arr[1] == arr[j]) {
				count[1]++;
			}
			if (arr[2] == arr[j]) {
				count[2]++;
			}
			if (arr[3] == arr[j]) {
				count[3]++;
			}
		}
		for (int j = 0; j < 4; j++) {
			if (max_c < count[j]) {
				max_c = count[j];
				countn = j;
			}
			if (max_1 < arr[j]) {
				max_1 = arr[j];
			}
		}
		if (max_c == 4) {
			if (max < 50000 + 5000 * arr[0]) {
				max = 50000 + 5000 * arr[0];
			}
			
		}
		else if (max_c == 3) {
			if (max < 10000 + arr[countn] * 1000) {
				max = 10000 + arr[countn] * 1000;
			}
		}
		else if (max_c == 2) {
			if (max < 2000 + 250 * arr[0] + 250 * arr[1] + 250 * arr[2] + 250 * arr[3] && count[0] == count[1] && count[1] == count[2] && count[2] == count[3]) {
				max = 2000 + 250 * arr[0] + 250 * arr[1] + 250 * arr[2] + 250 * arr[3];
			}
			else if (max < 1000 + 100 * arr[countn]) {
				max = 1000 + 100 * arr[countn];
			}
		}
		else if (max_c == 1) {
			if (max < 100 * max_1) {
				max = 100 * max_1;
			}
		}
	}

	printf("%d\n", max);

	return 0;
}
