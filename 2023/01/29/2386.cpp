#include <stdio.h>
#include <string.h>

int main(void) {

	char N = 'a' - 'A';
	int count;

	do {
		char arr[300] = { 0 };
		fgets(arr, 300, stdin);
		if (arr[0] == '#') {
			break;
		}
		count = 0;
		for (int i = 2; i < strlen(arr); i++) {
			if (arr[i] == arr[0] || arr[i] == arr[0] - N) {
				count++;
			}
		}
		printf("%c %d\n", arr[0], count);
	} while (1);

	return 0;
}