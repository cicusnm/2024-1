#include <stdio.h>
#include <stdlib.h>
int main() {
	int a, n;
	printf("배열의 길이를 입력하세요: ");
	scanf_s("%d", &a);
	int* b = (int*)calloc(a, sizeof(int));
	
	for (int i = 0; i < a; i++) {
		printf("배열에 들어갈 숫자를 입력하세요: ");
		scanf_s("%d", &n);
		*(b + i) = n;
	}
	for (int i = 0; i < a; i++) {
		printf("%d", *(b + i));
	}
	free(b);
	return 0;
}