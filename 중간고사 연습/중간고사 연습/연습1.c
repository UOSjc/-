#include <stdio.h>

int main(void) {
	double x;
	double y;
	int q;
	scanf_s("%lf %lf", &x, &y);

	if (x == 0 || y == 0) { printf("(%lf,%lf)�� ��и� ���� �������� �ʽ��ϴ�.", x, y); }
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
	printf("(%lf,%lf)�� %d��и� ���� �����մϴ�.", x, y, q);
}