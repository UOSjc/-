#include <stdio.h>

int main(void) {
	
	char name[15];
	char dep[30];
	int birth;

	printf("이름 입력 : ");
	scanf_s("%s", &name, sizeof(name));
	printf("학과 명 입력 : ");
	scanf_s("%s", &dep, sizeof(dep));
	printf("생일 입력 : ");
	scanf_s("%d", &birth);

	printf("이름 : %s\n학과 명 : %s\n생일 : %d\n", name, dep, birth);

}