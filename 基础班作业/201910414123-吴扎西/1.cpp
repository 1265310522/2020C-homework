#include<stdio.h>

int main()
{
	int a, b, result;
	printf("input two numbers:");
	scanf_s("%d %d", &a, &b);
	result = a + b;
	printf("The result is :%d", result);

	return 0;

}