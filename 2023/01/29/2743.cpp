#include <stdio.h>
#include <string.h>

int main(void) {

	char arr[105] = { 0 };
	int leng;

	scanf("%[^\n]s", arr);

	leng = strlen(arr);

	printf("%d\n", leng);

	return 0;
}