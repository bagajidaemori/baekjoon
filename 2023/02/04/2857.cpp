#include <stdio.h>
#include <string.h>

int main(void) {

	char arr[110] = { 0 };
	int count[10] = { 0 };
	int count0 = 0;
	int N;

	for (int i = 0; i < 5; i++) {
		scanf(" %[^\n]s", arr);
		N = strlen(arr);
		for (int j = 0; j < N; j++) {
			if ((arr[j] == 'F') && (arr[j + 1] == 'B') && (arr[j + 2] == 'I')) {
				count[i]++;
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		if (count[i] != 0) {
			printf("%d ", i + 1);
			count0++;
		}
	}

	if (count0 == 0)
		printf("HE GOT AWAY!\n");

	return 0;
}

/*
int main(void) {

	char arr[110] = { 0 };
	int count = 0;
	int N;

	for (int i = 0; i < 5; i++) {
		scanf(" %[^\n]s", arr);
		N = strlen(arr);
		for (int j = 0; j < N; j++) {
			if ((arr[j] == 'F') && (arr[j + 1] == 'B') && (arr[j + 2] == 'I')) {
				count++;
				printf("%d ", count);
			}
		}
	}
	if (count == 0) {
		printf("HE GOT AWAY!\n");
	}

	return 0;
}
*/