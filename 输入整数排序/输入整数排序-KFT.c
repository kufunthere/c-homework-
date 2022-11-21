#include<stdio.h>
#define N 6
void main()
{
    int i,j,k,t,a[N];
    printf("输入6大小无序的整数:\n",N);
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
    printf("数字从低到高排序结果为:\n");
    for(i=0;i<N;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");

}
