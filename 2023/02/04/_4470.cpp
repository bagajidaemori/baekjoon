#include <stdio.h>

int main(void) {

	int N;
	char arr[100] = { 0 };

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf(" %[^\n]s", arr);
		printf("%d", i + 1);
		printf(". %s\n", arr);
	}

	return 0;
}