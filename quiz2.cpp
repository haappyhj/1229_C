#include<stdio.h>

int main() {
	////문제1
	//int n;
	//scanf_s("%d", &n);

	//int i = 1;
	//printf("약수:");
	//while (i<=n) {
	//	if (n % i == 0) {
	//		printf("%d", i);
	//	}
	//	i++; //i++; 쓰기
	//}
	//

	////문제2
	//while (1) {
	//	printf("숫자 입력:");
	//	int b;
	//	int sum = 0;
	//	scanf_s("%d", &b);
	//	sum += b;

	//	if (b == 0) {
	//		printf("합은 %d", sum);
	//		break; //break은 나중에 쓰기
	//	}
	//}

	////문제3
	//
	//	printf("기준 정수 입력:");
	//	int k;
	//	scanf_s("%d", &k);

	//	while (1) {
	//		printf("숫자 입력:");
	//	int j;
	//	scanf_s("%d", &j);

	//	if (k > j) {
	//		printf("up"); continue;
	//	
	//	}

	//	if (k < j) {
	//		printf("down");  continue;
	//		
	//	}
	//	
	//	if (k == j) {
	//		printf("정답");
	//		break;
	//	}

		//문제4:두 수를 입력 받고 그 두 수의 최대 공약수 출력하기
	//int a, b;
	//scanf_s("%d %d", &a, &b);
	//int i = 1;
	//while (b!=0) { //너무 어려움!!!!!!!!!!!!
	//	int temp = b;
	//	b = a % b;
	//	a = temp;
	//	}
	//printf("%d\n", a);

	//	//문제5

	//	int n;
	//	scanf_s("%d", &n);
	//	while (1) {

	//	}
	

//계산기 프로그램
int t;
int f;
scanf_s("%d %d",&t,&f);

while (1) {
	printf("숫자 입력:\n");
	int p;
	scanf_s("%d",&p);
	
	if (p == 1) {
		printf("%d\n", t + f); continue;
	}

	if (p == 2) {
		printf("%d\n", t - f); continue;
	}

	if (p == 3) {
		printf("%d\n", t * f); continue;
	}
	if (p == 4) {
		printf("%d\n", t / f); continue;
	}
	if (p == 5) {
		printf("종료");
		break;	
	}

}
return 0;

}
