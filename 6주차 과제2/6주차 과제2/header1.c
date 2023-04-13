#include <stdio.h>

int gcd(int a, int b) { //�� ���� �ִ������� ����ϴ� �Լ� gcd(greatest common devisor)
	if (b == 0) {
		return a;
	}
	else {
		return gcd(b, a % b);
	}
}

void gcd_s() { //scanf�� �޾� �ִ����� ����ϴ� �Լ�
	int a, b;
	printf("�ִ������� ����� �� ������ �Է��Ͻÿ� : ");
	scanf_s("%d %d", &a, &b);
	printf("�ִ� ����� : %d\n", gcd(a, b));
}


int lcm(int a, int b){ //�� ���� �ְ������� ����ϴ� �Լ� lcm(least common mutiple)
	return(a * b) / gcd(a, b); 
}

void lcm_s() { //scanf�� �޾� �ּҰ���� ����ϴ� �Լ�
	int a, b;
	printf("�ּҰ������ ����� �� ������ �Է��Ͻÿ� : ");
	scanf_s("%d %d", &a, &b);
	printf("�ּҰ���� : %d\n", lcm(a,b));
}

int prime(int num) { //������ �Ҽ����� �Ǻ��ϴ� �Լ�
	if (num <= 1) {
		return 0;
	}
	for (int i = 2; i * i <= num; i++) {
		if (num % 1 == 0) {
			return 0;
		}
	}
	return 1;
}

void prime_s() { //scanf�� �޾� ������ �Ҽ����� �Ǻ��ϴ� �Լ�
	int num;
	printf("�Ҽ����� �Ǻ��� ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num);
	if (prime(num)) {
		printf("%d�� �Ҽ��̴�.\n", num);
	}
	else {
		printf("%d�� �Ҽ��� �ƴϴ�.\n", num);
	}
}