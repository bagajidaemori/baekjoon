#include <stdio.h>
#include <string.h>

int main(void) {

	char arr[300] = { 0 };
	int count;

	while (1) {
		count = 0;

		fgets(arr, 300, stdin);

		if (arr[0] == '#') {
			break;
		}

		for (int i = 0; i < strlen(arr); i++) {
			if ((arr[i] == 'a') || (arr[i] == 'e') || (arr[i] == 'i') || (arr[i] == 'o') || (arr[i] == 'u') || (arr[i] == 'A') || (arr[i] == 'E') || (arr[i] == 'I') || (arr[i] == 'O') || (arr[i] == 'U')) {
				count++;
			}
		}

		printf("%d\n", count);
	}

	return 0;
}
