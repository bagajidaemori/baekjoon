//다시풀어보기
#include <stdio.h>

int main(void) {

	char arr[51][51] = { 0 };
	char arr1[251] = { 0 };

	int a, b;
	int x, y;

	scanf(" %d %d", &a, &b);
	scanf(" %d %d", &y, &x);

	for (int i = 0; i < a; i++) {
		scanf(" %s", arr[i]);
	}

	for (int i = 0; i < a; i++) {
		int X = 0;
		for (int j = 0; j < b; j++) {
			for (int k = 0; k < x; k++) {
				arr1[X++] = arr[i][j];
			}
		}

		for (int j = 0; j < y; j++) {
			printf("%s\n", arr1);
		}
	}

	return 0;
}