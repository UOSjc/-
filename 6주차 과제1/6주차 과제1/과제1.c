#include <stdio.h>

void convert(int num, int jin) {
	if (num == 0) {
		return;
	}
	else {
		convert(num / jin, jin);
		printf("%d", num % jin);
	}
}

int main() {
	int num, jin;

	printf("변환할 10진수 입력 : ");
	scanf_s("%d", &num);
	printf("변환할 진법 입력(2-16) : ");
	scanf_s("%d", &jin);
	printf("%d의 %d진수 변환값 : ", num, jin);
	convert(num, jin);
	return 0;
}