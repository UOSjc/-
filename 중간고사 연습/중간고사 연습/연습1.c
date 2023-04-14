#include <stdio.h>

int main(void) {
	double x;
	double y;
	int q;
	scanf_s("%lf %lf", &x, &y);

	if (x == 0 || y == 0) { printf("(%lf,%lf)는 사분면 위에 존재하지 않습니다.", x, y); }
	else if (x > 0) {
		if (y > 0) {
			q = 1;
		}
		else if (y < 0) {
			q = 2;
		}
	 }
	else if (x < 0) {
		if (y > 0) {
			q = 3;
		}
		else if (y < 0) {
			q = 4;
		}
	}
	printf("(%lf,%lf)는 %d사분면 위에 존재합니다.", x, y, q);
}