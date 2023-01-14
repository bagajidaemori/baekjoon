#include <stdio.h>
#include <string.h>
 
int main(void) {
 
	int N;
	char left[60] = { 0 }, right[60] = { 0 };
	int lastL, lastR;
 
	scanf(" %d", &N);
 
	for (int i = 0; i < N; i++) {
		scanf(" %s %s", left, right);
		lastL = strlen(left) - 1;
		lastR = strlen(right) - 1;
		if (left[lastL] == right[lastR]) {
			if (left[lastL] == 'S') {
				if (lastL < lastR)
					printf(">\n");
				else if (lastL == lastR)
					printf("=\n");
				else
					printf("<\n");
			}
			else if (left[lastL] == 'L') {
				if (lastL < lastR)
					printf("<\n");
				else if (lastL == lastR)
					printf("=\n");
				else
					printf(">\n");
			}
			else
				printf("=\n");
		}
		else {
			if (left[lastL] == 'L')
				printf(">\n");
			else if (left[lastL] == 'S')
				printf("<\n");
			else
			{
				if (right[lastR] == 'L')
					printf("<\n");
				else
					printf(">\n");
			}
		}
 
	}
	return 0;
}
