#include <stdio.h>
#include <string.h>

#define Max 1000010

int main(void) {

	char arr[Max] = { 0 };
	int count = 0;
	int len;

	scanf("%[^\n]s", arr);

	len = strlen(arr);
	
	for (int i = 0; i < len; i++) {
		if ((arr[i] == ' ')) {
			count++;
		}
	}

	if (arr[len - 1] == ' ')
		count--;
	if (arr[0] == ' ')
		count--;

	printf("%d", count + 1);

	return 0;
}
