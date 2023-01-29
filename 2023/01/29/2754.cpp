#include <stdio.h>

struct HAK{
	char hak[5] = { 0 };
	double jum = 0.0;
};

int main(void) {

	char arr[5] = { 0 };

	HAK Ap = { "A+", 4.3 };
	HAK A0 = { "A0", 4.0 };
	HAK Am = { "A-", 3.7 };
	HAK Bp = { "B+", 3.3 };
	HAK B0 = { "B0", 3.0 };
	HAK Bm = { "B-", 2.7 };
	HAK Cp = { "C+", 2.3 };
	HAK C0 = { "C0", 2.0 };
	HAK Cm = { "C-", 1.7 };
	HAK Dp = { "D+", 1.3 };
	HAK D0 = { "D0", 1.0 };
	HAK Dm = { "D-", 0.7 };
	HAK F = { "F", 0.0 };

	scanf("%s", arr);

	if (arr[0] == 'A') {
		if (arr[1] == '+') {
			printf("%.1f", Ap.jum);
		}
		else if (arr[1] == '0') {
			printf("%.1f", A0.jum);
		}
		else if (arr[1] == '-') {
			printf("%.1f", Am.jum);
		}
	}
	if (arr[0] == 'B') {
		if (arr[1] == '+') {
			printf("%.1f", Bp.jum);
		}
		else if (arr[1] == '0') {
			printf("%.1f", B0.jum);
		}
		else if (arr[1] == '-') {
			printf("%.1f", Bm.jum);
		}
	}
	if (arr[0] == 'C') {
		if (arr[1] == '+') {
			printf("%.1f", Cp.jum);
		}
		else if (arr[1] == '0') {
			printf("%.1f", C0.jum);
		}
		else if (arr[1] == '-') {
			printf("%.1f", Cm.jum);
		}
	}
	if (arr[0] == 'D') {
		if (arr[1] == '+') {
			printf("%.1f", Dp.jum);
		}
		else if (arr[1] == '0') {
			printf("%.1f", D0.jum);
		}
		else if (arr[1] == '-') {
			printf("%.1f", Dm.jum);
		}
	}
	if (arr[0] == 'F') {
		printf("%.1f", F.jum);
	}

	return 0;
}