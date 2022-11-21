#include<stdio.h>

int main()

{

int i,a[20]={1,1};

for (i=2; i<20; i++)

{

a[i]=a[i-2]+a[i-1];

}

for (i = 0; i<20; i++)

{

printf("%d ",a[i]);

}

printf("\n");

return 0;

}