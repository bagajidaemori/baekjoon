#include <stdio.h>

int main(void) {

	int num[10] = { 0 };
	char arr[10] = { 0 };
	int max = 0, min = 10000, mid;

	scanf("%d %d %d", &num[0], &num[1], &num[2]);
	scanf("%s", arr);

	for (int i = 0; i < 3; i++) {
		if (max < num[i])
			max = num[i];
		if (num[i] < min)
			min = num[i];
	}

	for (int i = 0; i < 3; i++) {
		if (num[i] != min && num[i] != max)
			mid = num[i];
	}

	for (int i = 0; i < 3; i++) {
		if (arr[i] == 'A')
			printf("%d ", min);
		else if (arr[i] == 'B')
			printf("%d ", mid);
		else if (arr[i] == 'C')
			printf("%d ", max);
	}

	return 0;
}