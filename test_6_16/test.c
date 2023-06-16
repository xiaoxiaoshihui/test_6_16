#define _CRT_SECURE_NO_WARNINGS 1
//此程序用来测试新电脑上安装的Visual Studio2022
#include <stdio.h>


int main() {

	int arr[10] = { 0 };
	int i = 0;

	for (i = 0; i < 10; i++) {
		printf("数字%d:", i+1);
		scanf("%d", &arr[i]);
	}

	int MAX = arr[0];

	for (i = 0; i < 10; i++) {
		if (arr[i] > MAX) {
			MAX = arr[i];
		}
	}

	printf("本次输入的十个数中最大为：%d", MAX);

	return 0;
}