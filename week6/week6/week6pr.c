#include <stdio.h>

int fac(int num) {
	int num;
	scanf_s("%d", &num);
	int result = 1;
	if (num == 1 || num == 0) {
		return 1;
	}
	result = num * fac(num - 1);

	return result;
	printf("%d", &result);
}