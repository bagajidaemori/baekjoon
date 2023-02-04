#include <stdio.h>
#include <algorithm>

using namespace std;

int main(void) {

	int arr[30] = { 0 };
	int a;

	for (int i = 1; i <= 30; i++) {
		arr[i - 1] = i;
	}

	for (int i = 0; i < 28; i++) {
		scanf("%d", &a);
		if (arr[a - 1] == a)
			arr[a - 1] = 0;
	}

	sort(arr, arr + 30);

	printf("%d\n", arr[28]);
	printf("%d\n", arr[29]);

	return 0;
}