//신소재공학과 2019450030 이재창

#include <stdio.h>

int main(void) {

	char name[15];	//이름 변수, 문자열 크기는 넉넉하게 15로 잡음
	int birth;	//생년월일 변수, 숫자 8자리로 받으므로 정수로 함
	int stud_num;	//학번 변수, 마찬가지의 이유로 정수로 함
	char depart[40];	//학과명 변수, 학과명은 긴 경우가 많아 문자열크기를 크게 잡음

	printf("이름 입력 : ");	//이름 입력 문구 출력
	scanf_s("%s", name, sizeof(name));	//이름 변수에 해당하는 문자열을 사용자로부터 입력받음
	printf("생년월일 입력 : ");	//생년월일 입력 문구 출력
	scanf_s("%d", &birth);	//생년월일 변수에 해당하는 정수를 사용자로부터 입력받음
	printf("학번 입력 : ");	//학번 입력 문구 출력
	scanf_s("%d", &stud_num);	//학번 변수에 해당하는 정수를 사용자로부터 입력받음
	printf("학과명 입력 : ");	//학과명 입력 문구 출력
	scanf_s("%s", depart, sizeof(depart));	//학과명 변수에 해당하는 문자열을 사용자로부터 입력받음

	printf("이름 : %s\n생년월일 : %d\n학번 : %d\n학과명 : %s", name, birth, stud_num, depart);	//최종 결과물 출력

}