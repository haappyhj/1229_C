#include<stdio.h>

int main() {
	////����1
	//int n;
	//scanf_s("%d", &n);

	//int i = 1;
	//printf("���:");
	//while (i<=n) {
	//	if (n % i == 0) {
	//		printf("%d", i);
	//	}
	//	i++; //i++; ����
	//}
	//

	////����2
	//while (1) {
	//	printf("���� �Է�:");
	//	int b;
	//	int sum = 0;
	//	scanf_s("%d", &b);
	//	sum += b;

	//	if (b == 0) {
	//		printf("���� %d", sum);
	//		break; //break�� ���߿� ����
	//	}
	//}

	////����3
	//
	//	printf("���� ���� �Է�:");
	//	int k;
	//	scanf_s("%d", &k);

	//	while (1) {
	//		printf("���� �Է�:");
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
	//		printf("����");
	//		break;
	//	}

		//����4:�� ���� �Է� �ް� �� �� ���� �ִ� ����� ����ϱ�
	//int a, b;
	//scanf_s("%d %d", &a, &b);
	//int i = 1;
	//while (b!=0) { //�ʹ� �����!!!!!!!!!!!!
	//	int temp = b;
	//	b = a % b;
	//	a = temp;
	//	}
	//printf("%d\n", a);

	//	//����5

	//	int n;
	//	scanf_s("%d", &n);
	//	while (1) {

	//	}
	

//���� ���α׷�
int t;
int f;
scanf_s("%d %d",&t,&f);

while (1) {
	printf("���� �Է�:\n");
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
		printf("����");
		break;	
	}

}
return 0;

}
