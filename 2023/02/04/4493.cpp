#include <stdio.h>

int main(void) {

	int N;
	int N1;
	char p1, p2;
	int count;


	scanf(" %d", &N);

	for (int i = 0; i < N; i++) {
		scanf(" %d", &N1);
		count = 0;
		for (int j = 0; j < N1; j++) {
			scanf(" %c %c", &p1, &p2);
			if (p1 == 'R' && p2 == 'S') {
				count++;
			}
			else if (p1 == 'S' && p2 == 'P') {
				count++;
			}
			else if (p1 == 'P' && p2 == 'R') {
				count++;
			}
			else if (p1 == p2)
				continue;
			else
				count--;
		}
		if (count < 0)
			printf("Player 2\n");
		else if (count > 0)
			printf("Player 1\n");
		else
			printf("TIE\n");
	}

	return 0;
}