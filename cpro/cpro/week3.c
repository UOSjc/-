#include <stdio.h>

int main(void) {
	
	char name[15];
	char dep[30];
	int birth;

	printf("�̸� �Է� : ");
	scanf_s("%s", &name, sizeof(name));
	printf("�а� �� �Է� : ");
	scanf_s("%s", &dep, sizeof(dep));
	printf("���� �Է� : ");
	scanf_s("%d", &birth);

	printf("�̸� : %s\n�а� �� : %s\n���� : %d\n", name, dep, birth);

}