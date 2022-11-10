#include <stdio.h>
int main ()

{
	int a[10] = {12,56,85,4,23,45,90,110};
	int max = a[0];                	// 我们假定第一个数是最大的数
	int i;                       	// 让数组中其他数和我们假定的最大的数比较
	for (i = 1; i < 10; i++)
	{          						// 对数组中的数遍历	                                                 
		if (a[i] > max)             // 让它们依次比较，如果比我们假定的数大
		max = a[i];          		// 我们就将那个较大的数的值给max
	}
	printf ("%d\n", max);           // 最终的max就是数组中最大的那个数
	return 0;
}

