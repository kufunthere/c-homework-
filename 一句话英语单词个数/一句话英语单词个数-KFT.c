#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char str[50];
	int i,count = 1;
	char blank;
	printf("����һ��Ӣ��:");
	gets (str);
	if(str[0]=='\0')
	{
		printf("û�е���\n");
	}
	else
	{
		for(i = 0;str[i] != 0;i++)
		{
			blank = str[i];
			if(blank==' ')
				count++;
		}
		printf("��%d������.",count);
	}
	return 0;
}



