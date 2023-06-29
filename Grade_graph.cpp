#include <stdio.h>
int main() {
	int i = 0, k = 0;
	int std[5];
	int graph = 0;

	printf("학생들 성적을 입력하세요 : \n");
	for (i = 0; i < 5; i++) {
		printf("학생 %d의 성적 : ", i + 1);
		scanf_s("%d", &std[i]);
	}

	for (i = 0; i < 5; i++) {
		printf("학생 %d의 성적 그래프 : ", i + 1);
		for (graph = 0; graph < std[i]; graph++) {
			printf("ㅁ");
		}
		printf("\n");
	}


	return 0;
}