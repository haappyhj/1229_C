#include<stdio.h>

int main() {

	/*while (1<3) {
		printf("올해 마지막 수업\n");

	}*/

//while문 제어하기
	//1. 조건 조작
	//int a = 0;
	//while (a < 5) {
	//	printf("%d\n", a);
	//	a++;
	//}

	////break문 활용
	////1은 True를, 0은 False를 의미함
	//int b;
	//while (1) {
	//	printf("숫자 3을 입력해야 끝남!\n");
	//	printf("숫자 입력:");
	//	scanf_s("%d", &b);
	//	if (b == 3) break;
	//}

	//do-while문
	int a = 10;
	do {
		printf("countdown:%d!\n", a);
		a--;
	} while (a > 0);
	printf("새해 복 많이 받으슈");

	return 0;
}

//for문: 끝을 알 때, while문: 끝을 모를 때

