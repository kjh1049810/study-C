#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	a += 100;
	b %= 10;
	printf("%d %d", a, b);
	return 0;
}

