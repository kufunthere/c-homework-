#include <stdio.h>
#include <string.h>
int main()
{	
	char str1[100],str2[100];
	int i,n;
	i=n=0; 
	printf("�������һ���ַ�����\n");
	gets(str1);
	printf("������ڶ����ַ�����\n");
	gets(str2);
	printf("\n",strcat(str1,str2));
	while(str1[n]!='\0'){
		n++;
	}
	printf("ͨ��strcat�������ӽ��Ϊ��\n%s",str1);
	while(str2[i]!='\0'){
		str1[++n]=str2[i++];
	}
	printf("\n��ͨ��strcat�������ӽ��Ϊ��\n%s",str1);
	return 0;
}

