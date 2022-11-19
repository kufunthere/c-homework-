#include<stdio.h>

int main()
{
	int x,y,n;

	printf("输入x和y的值\n");
	scanf("%d,%d",&x,&y);
	int fun(int x,int y);
	printf("x的y次方的值为:%d",fun(x,y));
	return 0;
}
int fun(int x,int y)
{
		int i,a,b,c=x;

		for( i = 1; i < y; i++)
	 {
			a=x;
			c=c*a;
     }
 
     return c;

}
