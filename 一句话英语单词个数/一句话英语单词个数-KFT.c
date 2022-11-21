#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char str[50];
	int i,count = 1;
	char blank;
	printf("请打出一句英文:");
	gets (str);
	if(str[0]=='\0')
	{
		printf("没有单词\n");
	}
	else
	{
		for(i = 0;str[i] != 0;i++)
		{
			blank = str[i];
			if(blank==' ')
				count++;
		}
		printf("有%d个单词.",count);
	}
	return 0;
}



