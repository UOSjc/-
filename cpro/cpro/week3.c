#include <stdio.h>

int main(void) {

	char name[15];
	int birth;
	int stud_num;
	char depart[40];

	printf("이름 입력 : ");
	scanf_s("%s", name, sizeof(name));
	printf("생년월일(8자리) 입력 : ");
	scanf_s("%d", &birth);
	printf("학번 입력 : ");
	scanf_s("%d", &stud_num);
	printf("학과명 입력 : ");
	scanf_s("%s", depart, sizeof(depart));

	printf("이름 : %s\n생년월일 : %d\n학번 : %d\n학과명 : %s", name, birth, stud_num, depart);
  
}