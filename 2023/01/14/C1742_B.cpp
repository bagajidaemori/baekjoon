#include <stdio.h>
#include <string.h>
#include <algorithm>
 
using namespace std;
 
int main(void) {
 
	int N;
	int len, arr[110] = { 0 }, exep = 0;
 
	scanf(" %d", &N);
 
	for (int i = 0; i < N; i++) {
		scanf(" %d", &len);
		for (int j = 0; j < len; j++) {
			scanf(" %d", &arr[j]);
		}
		sort(arr, arr + len);
		for (int j = 0; j < len - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				continue;
			}
			else
				exep++;
		}
		if (exep == 0)
			printf("YES\n");
		else
			printf("NO\n");
		exep = 0;
	}
 
	return 0;
}
