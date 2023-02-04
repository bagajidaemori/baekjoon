#include <stdio.h>

int main(void) {

	char arr[110] = { 0 };
	int N;
	int count[3] = { 0 };
	int max = 0;

	scanf(" %d", &N);
	scanf(" %s", arr);

	for (int i = 0; i < N; i++) {
		if (i % 3 == 0) {
			if (arr[i] == 'A')
				count[0]++;
		}
		else if (i % 3 == 1) {
			if (arr[i] == 'B')
				count[0]++;
		}
		else {
			if (arr[i] == 'C')
				count[0]++;
		}
		if (i % 2 == 0) {
			if (arr[i] == 'B') {
				count[1]++;
			}
		}
		else {
			if (i % 4 == 1) {
				if (arr[i] == 'A') {
					count[1]++;
				}
			}
			else {
				if (arr[i] == 'C') {
					count[1]++;
				}
			}
		}
		if (i % 6 == 0 || i % 6 == 1) {
			if (arr[i] == 'C') {
				count[2]++;
			}
		}
		else if (i % 6 == 2 || i % 6 == 3) {
			if (arr[i] == 'A') {
				count[2]++;
			}
		}
		else {
			if (arr[i] == 'B') {
				count[2]++;
			}
		}
	}

	for (int i = 0; i < 3; i++) {
		if (max < count[i]) {
			max = count[i];
		}
	}

	printf("%d\n", max);

	if (max == count[0]) {
		printf("Adrian\n");
	}
	if (max == count[1]) {
		printf("Bruno\n");
	}
	if (max == count[2]) {
		printf("Goran\n");
	}

	return 0;
}