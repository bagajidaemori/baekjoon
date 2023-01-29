#include <stdio.h>
#include <string.h>

int main(void) {

	char arr[110] = { 0 };

	scanf("%s", arr);

	int N = strlen(arr);

	for (int i = 0; i < N; i++) {
		if (arr[i] == 'C' || arr[i] == 'A' || arr[i] == 'M' || arr[i] == 'B' || arr[i] == 'R' || arr[i] == 'I' || arr[i] == 'D' || arr[i] == 'G' || arr[i] == 'E') {
			arr[i] = NULL;
		}
		if (arr[i] == NULL)
			continue;
		else
			printf("%c", arr[i]);
	}

	return 0;
}