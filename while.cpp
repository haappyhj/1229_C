#include<stdio.h>

int main() {

	/*while (1<3) {
		printf("���� ������ ����\n");

	}*/

//while�� �����ϱ�
	//1. ���� ����
	//int a = 0;
	//while (a < 5) {
	//	printf("%d\n", a);
	//	a++;
	//}

	////break�� Ȱ��
	////1�� True��, 0�� False�� �ǹ���
	//int b;
	//while (1) {
	//	printf("���� 3�� �Է��ؾ� ����!\n");
	//	printf("���� �Է�:");
	//	scanf_s("%d", &b);
	//	if (b == 3) break;
	//}

	//do-while��
	int a = 10;
	do {
		printf("countdown:%d!\n", a);
		a--;
	} while (a > 0);
	printf("���� �� ���� ������");

	return 0;
}

//for��: ���� �� ��, while��: ���� �� ��

