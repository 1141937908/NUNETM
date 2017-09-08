#include <stdio.h>
int main()
{
    int i,j,sum;
    for(i=2;i<1000;i++){    //从2开始，1000以内循环
        sum=0;
        for(j=1;j<i;j++)    //循环找因子，并相加
            if(i%j==0)  sum+=j;
        if(sum==i)  printf("%d\n",i);
    }
    return 0;
}
