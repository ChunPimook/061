#include <stdio.h>
int main() {
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	if (a >= 1000) {
		if (a >= 1000 && ((b < 4 && c < 60) || (b == 4 && c == 0))) {
			printf("Free 4 Hour");
		}
		else
		{
			if (a >= 1000 && b >= 4 ) {
				int d = b-4;
				
				if (c != 0)
					d++;
				
				d *= 30;
				
				printf("%d", d);

			}
		}
	}
		if (a < 1000) {
			if (a < 1000 && b <= 0 && c < 60) {
				printf("Free 1 Hour");
			}
			if (b >= 1 && c > 0) {
				int f = b * 30;
				printf("%d", f);
			}
		}

	
}
