#define _CRT_SECURE_NO_WARNINGS 1
//�˳������������µ����ϰ�װ��Visual Studio2022
#include <stdio.h>


int main() {

	int arr[10] = { 0 };
	int i = 0;

	for (i = 0; i < 10; i++) {
		printf("����%d:", i+1);
		scanf("%d", &arr[i]);
	}

	int MAX = arr[0];

	for (i = 0; i < 10; i++) {
		if (arr[i] > MAX) {
			MAX = arr[i];
		}
	}

	printf("���������ʮ���������Ϊ��%d", MAX);

	return 0;
}