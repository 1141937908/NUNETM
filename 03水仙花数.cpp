#include <stdio.h>
#include <math.h>
int main()
{
    int i,a,b,c,num=0;
    for(i=100; i<=999; i++)
    {
        a=i%10;          //取个位
        b=i%100/10;      //取十位
        c=i/100;         //取百位
        if(pow(a,3)+pow(b,3)+pow(c,3)==i)   //判断是否为水仙花数
        {
            printf("%d\n",i);
            num++;
        }
    }
    printf("\n1~1000以内共%d个水仙花数\n",num);
    return 0;
}
