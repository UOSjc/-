#include <stdio.h>

int gcd(int a, int b) { //두 수의 최대공약수를 계산하는 함수 gcd(greatest common devisor)
	if (b == 0) {
		return a;
	}
	else {
		return gcd(b, a % b);
	}
}

void gcd_s() { //scanf로 받아 최대공약수 계산하는 함수
	int a, b;
	printf("최대공약수를 계산할 두 정수를 입력하시오 : ");
	scanf_s("%d %d", &a, &b);
	printf("최대 공약수 : %d\n", gcd(a, b));
}


int lcm(int a, int b){ //두 수의 최고공배수를 계산하는 함수 lcm(least common mutiple)
	return(a * b) / gcd(a, b); 
}

void lcm_s() { //scanf로 받아 최소공배수 계산하는 함수
	int a, b;
	printf("최소공배수를 계산할 두 정수를 입력하시오 : ");
	scanf_s("%d %d", &a, &b);
	printf("최소공배수 : %d\n", lcm(a,b));
}

int prime(int num) { //정수가 소수인지 판별하는 함수
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

void prime_s() { //scanf로 받아 정수가 소수인지 판별하는 함수
	int num;
	printf("소수인지 판별할 정수를 입력하시오 : ");
	scanf_s("%d", &num);
	if (prime(num)) {
		printf("%d는 소수이다.\n", num);
	}
	else {
		printf("%d는 소수가 아니다.\n", num);
	}
}