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

	printf("��ȯ�� 10���� �Է� : ");
	scanf_s("%d", &num);
	printf("��ȯ�� ���� �Է�(2-16) : ");
	scanf_s("%d", &jin);
	printf("%d�� %d���� ��ȯ�� : ", num, jin);
	convert(num, jin);
	return 0;
}