#include <stdio.h>
#include <string.h>

int main(void) {

	char arr[10] = { 0 };
	arr[0] = '1';
	int flag = 0;

	while (1) {
		scanf("%s", arr);
		flag = 0;
		for (int i = 0; i < strlen(arr); i++) {
			if (arr[i] != arr[strlen(arr) - 1 - i])
				flag++;
		}
		if (flag == 0) {
			if (arr[0] == '0') {
				break;
			}
			printf("yes\n");
		}

		else
			printf("no\n");
	}

	return 0;
}
