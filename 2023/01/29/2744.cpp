#include <stdio.h>
#include <string.h>

int main(void) {

	char arr[110] = { 0 };
	char a = 'a' - 'A';

	scanf("%[^\n]s", arr);

	for (int i = 0; i < strlen(arr); i++) {
		if ('a' <= arr[i] && arr[i] <= 'z') {
			arr[i] = arr[i] - a;
		}
		else {
			arr[i] = arr[i] + a;
		}
	}

	printf("%s\n", arr);

	return 0;
}