#include <stdio.h>
#include <math.h>
 
int main(void) {
 
	int N;
	int a, b, c;
	int first, second;
	scanf(" %d", &N);
 
	for (int i = 0; i < N; i++) {
		scanf(" %d %d %d", &a, &b, &c);
 
		first = a - 1;
 
		if (b < c) {
			second = c - b + c - 1;
		}
		else
			second = b - 1;
 
		if (first < second)
			printf("1\n");
		else if (first == second)
			printf("3\n");
		else
			printf("2\n");
 
	}
 
	return 0;
}
