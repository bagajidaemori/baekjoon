#include <stdio.h>
#include <string.h>

int main(void) {

	int N;
	char arr[100] = { 0 };
	int len;
	int g, b;
	
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		g = 0;
		b = 0;
		scanf(" %[^\n]s", arr);
		len = strlen(arr);
		for (int j = 0; j < len; j++) {
			if (arr[j] == 'G' || arr[j] == 'g')
				g++;
			else if (arr[j] == 'B' || arr[j] == 'b')
				b++;
		}

		for (int j = 0; j < len; j++) {
			printf("%c", arr[j]);
		}
		if (g < b)
			printf(" is A BADDY\n");
		else if (b < g)
			printf(" is GOOD\n");
		else
			printf(" is NEUTRAL\n");
	}

	return 0;
}