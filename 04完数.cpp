#include <stdio.h>
int main()
{
    int i,j,sum;
    for(i=2;i<1000;i++){    //��2��ʼ��1000����ѭ��
        sum=0;
        for(j=1;j<i;j++)    //ѭ�������ӣ������
            if(i%j==0)  sum+=j;
        if(sum==i)  printf("%d\n",i);
    }
    return 0;
}
