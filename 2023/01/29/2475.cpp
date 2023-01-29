#include <stdio.h>
#include <math.h>

int main(void) {

	long long arr[6] = { 0 };

	for (int i = 0; i < 5; i++) {
		scanf(" %d", &arr[i]);
		arr[5] += pow(arr[i], 2);
	}

	printf("%d\n", arr[5] % 10);

	return 0;
}