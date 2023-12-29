#include<stdio.h>

////문제1: 짝수 출력하기
int main() {
	//	
	//	for (int i = 2; i < 101; i=i+2) { //i=i+2로 앞에 i= 쓰기!
	//		printf("%d\n", i);
	//	}
	//
	////문제2: 역순 숫자 출력하기
	//	for (int t = 10; t > 0; t--) {
	//		printf("%d\n", t);
	//	}
	//
	////문제3: N의 배수 출력하기
	//	int n;
	//	scanf_s("%d",&n);
	//
	//	for (int o=1; o * n < 101; o++) {
	//		printf("%d*%d=%d\n", o,n,o*n);
	//	}

	////문제4: 별(*) 패턴 출력하기
	//int m;
	//scanf_s("%d", &m);
	//for (int i = 0; i < m; i++) {
	//	for (int t = 0; t < m; t++) {
	//		if (i < t) continue;
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	//문제5:짝수-홀수 합 계산하기
	int sum = 0; //sum 0d 초기화 처리부터 해주기
	for (int i = 2; i < 101; i = i + 2) {
		sum += i;
	}
	printf("짝수의 합=%d\n", sum);


	int summ=0;
	for (int t = 1; t < 101; t = t + 2) {
	summ += t;
}
	printf("홀수의 합=%d\n", summ);

		return 0;
	}


