#include <stdio.h>
#include <math.h>
int main()
{
    int i,a,b,c,num=0;
    for(i=100; i<=999; i++)
    {
        a=i%10;          //ȡ��λ
        b=i%100/10;      //ȡʮλ
        c=i/100;         //ȡ��λ
        if(pow(a,3)+pow(b,3)+pow(c,3)==i)   //�ж��Ƿ�Ϊˮ�ɻ���
        {
            printf("%d\n",i);
            num++;
        }
    }
    printf("\n1~1000���ڹ�%d��ˮ�ɻ���\n",num);
    return 0;
}
