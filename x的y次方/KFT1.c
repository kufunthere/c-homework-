#include<stdio.h>

int main()
{
	int x,y,n;

	printf("����x��y��ֵ\n");
	scanf("%d,%d",&x,&y);
	int fun(int x,int y);
	printf("x��y�η���ֵΪ:%d",fun(x,y));
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
