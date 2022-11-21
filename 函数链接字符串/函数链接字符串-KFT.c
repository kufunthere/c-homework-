#include <stdio.h>
int main()
{
	char s1[100], s2[30];
	printf("请输入两个需要连接的字符串：\n");
	gets(s1);
	gets(s2);
	mystrcat(s1, s2);
	puts(s1);
    getchar();
    return 0;
}

void mystrcat(char s1[], char s2[])
{
	int i=0, j=0;
	while (s1[++i]);
	while (s1[i++] = s2[j++]);
}