#include <stdio.h>

int main(void) {

	char name[15];
	int birth;
	int stud_num;
	char depart[40];

	printf("�̸� �Է� : ");
	scanf_s("%s", name, sizeof(name));
	printf("�������(8�ڸ�) �Է� : ");
	scanf_s("%d", &birth);
	printf("�й� �Է� : ");
	scanf_s("%d", &stud_num);
	printf("�а��� �Է� : ");
	scanf_s("%s", depart, sizeof(depart));

	printf("�̸� : %s\n������� : %d\n�й� : %d\n�а��� : %s", name, birth, stud_num, depart);
  
}