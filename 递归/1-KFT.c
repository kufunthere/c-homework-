#include <stdio.h>

int main()
{
	int a;
	float sum();
	
	printf("������n��");
	scanf("%d",&a);
	printf("�����%f",sum(a));
	getchar();
    getchar();
	
	return 0;
}

float sum(int x)
{
	float t;
	
	if(x==1){
		t= 1.0/3;
	}else{
		t= sum(x-1)+x/(2*x+1);
	}
	
	return t;
}
