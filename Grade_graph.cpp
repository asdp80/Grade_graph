#include <stdio.h>
int main() {
	int i = 0, k = 0;
	int std[5];
	int graph = 0;

	printf("�л��� ������ �Է��ϼ��� : \n");
	for (i = 0; i < 5; i++) {
		printf("�л� %d�� ���� : ", i + 1);
		scanf_s("%d", &std[i]);
	}

	for (i = 0; i < 5; i++) {
		printf("�л� %d�� ���� �׷��� : ", i + 1);
		for (graph = 0; graph < std[i]; graph++) {
			printf("��");
		}
		printf("\n");
	}


	return 0;
}