#include <stdio.h>
int main()
{
    int i ,count =0;
    float average,sum =0;
    int a[]={1,2,3,4,5,6,7,8,9,10};
        for (i=0;i<10;i++)
    {
        if (a[i]%2 ==0)continue;
        sum+=a[i];
        count++;
    }
average=sum/count;
printf("count=%d\naverage=%f\n",count,average);
return 0 ;
}