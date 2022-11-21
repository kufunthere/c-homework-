#include <stdio.h>
#include <string.h>
int main()
{	
	char str1[100],str2[100];
	int i,n;
	i=n=0; 
	printf("请输入第一个字符串：\n");
	gets(str1);
	printf("请输入第二个字符串：\n");
	gets(str2);
	printf("\n",strcat(str1,str2));
	while(str1[n]!='\0'){
		n++;
	}
	printf("通过strcat函数串接结果为：\n%s",str1);
	while(str2[i]!='\0'){
		str1[++n]=str2[i++];
	}
	printf("\n不通过strcat函数串接结果为：\n%s",str1);
	return 0;
}

