#include<stdio.h>
#define N 6
void main()
{
    int i,j,k,t,a[N];
    printf("����6��С���������:\n",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N-1;i++)
    {
        for(j=0;j<N-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("���ִӵ͵���������Ϊ:\n");
    for(i=0;i<N;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");

}
