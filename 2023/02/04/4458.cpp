#include <stdio.h>

int main(void) {

	int N;
	char arr[100] = { 0 };

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf(" %[^\n]s", arr);
		if (arr[0] <= 'Z' && 'A' <= arr[0])
			printf("%s\n", arr);
		else {
			arr[0] += 'A' - 'a';
			printf("%s\n", arr);
		}
	}

	return 0;
}