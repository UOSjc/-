#include <stdio.h>
#define LEN 10 // LEN�κ��� ������ ���� 10���� �ϰ������� ��ü��

int main(void) {

	int num[LEN] = { 1,2,3,4,5 };

	for (int i= 0; i < LEN; i++) {
		printf("%d\n", num[i]);
	}
		
}