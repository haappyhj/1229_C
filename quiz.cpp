#include<stdio.h>

////����1: ¦�� ����ϱ�
int main() {
	//	
	//	for (int i = 2; i < 101; i=i+2) { //i=i+2�� �տ� i= ����!
	//		printf("%d\n", i);
	//	}
	//
	////����2: ���� ���� ����ϱ�
	//	for (int t = 10; t > 0; t--) {
	//		printf("%d\n", t);
	//	}
	//
	////����3: N�� ��� ����ϱ�
	//	int n;
	//	scanf_s("%d",&n);
	//
	//	for (int o=1; o * n < 101; o++) {
	//		printf("%d*%d=%d\n", o,n,o*n);
	//	}

	////����4: ��(*) ���� ����ϱ�
	//int m;
	//scanf_s("%d", &m);
	//for (int i = 0; i < m; i++) {
	//	for (int t = 0; t < m; t++) {
	//		if (i < t) continue;
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	//����5:¦��-Ȧ�� �� ����ϱ�
	int sum = 0; //sum 0d �ʱ�ȭ ó������ ���ֱ�
	for (int i = 2; i < 101; i = i + 2) {
		sum += i;
	}
	printf("¦���� ��=%d\n", sum);


	int summ=0;
	for (int t = 1; t < 101; t = t + 2) {
	summ += t;
}
	printf("Ȧ���� ��=%d\n", summ);

		return 0;
	}


