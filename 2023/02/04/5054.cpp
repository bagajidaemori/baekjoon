#include <stdio.h>
#include <algorithm>

using namespace std;

int main(void) {

	int N;
	int ans;

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		int a;
		int arr[100] = { 0 };
		scanf("%d", &a);
		for (int j = 0; j < a; j++) {
			scanf(" %d", &arr[j]);
		}
		sort(arr, arr + a);
		ans = (arr[a - 1] - arr[0]) * 2;
		printf("%d\n", ans);
	}

	return 0;
}