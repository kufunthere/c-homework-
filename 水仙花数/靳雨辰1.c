#include<stdio.h>
int main()
{
	printf("ˮ�ɻ���:\n");
	int i, a, b, c;
	for (i = 100; i <= 999; i++) 
	{
		int a = i % 10;
		int b = (i / 10) % 10;
		int c = i / 100;
		if (i == a * a * a + b * b * b + c * c * c) 
			printf("%d\t", i);
	}

	return 0;
}

