#include <stdio.h>
#define LEN 10 // LEN부분이 컴파일 전에 10으로 일괄적으로 교체됨

int main(void) {

	int num[LEN] = { 1,2,3,4,5 };

	for (int i= 0; i < LEN; i++) {
		printf("%d\n", num[i]);
	}
		
}