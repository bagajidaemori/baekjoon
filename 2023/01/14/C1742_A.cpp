#include <stdio.h>
 
int main(void) {
 
	int N;
	int arr[5] = { 0 }, flag = 0, sum = 0;
 
	scanf("%d", &N);
 
	for (int i = 0; i < N; i++) {
		int max = 0;
		scanf(" %d %d %d", &arr[0], &arr[1], &arr[2]);
		for (int i = 0; i < 3; i++) {
			if (max < arr[i]) {
				max = arr[i];
				flag = i;
			}
		}
		if (flag == 0) {
			sum = arr[1] + arr[2];
			if (sum == max) {
				printf("YES\n");
			}
			else
				printf("NO\n");
		}
		else if (flag == 1) {
			sum = arr[0] + arr[2];
			if (sum == max) {
				printf("YES\n");
			}
			else
				printf("NO\n");
		}
		else if (flag == 2) {
			sum = arr[1] + arr[0];
			if (sum == max) {
				printf("YES\n");
			}
			else
				printf("NO\n");
		}
	}
 
	return 0;
}
