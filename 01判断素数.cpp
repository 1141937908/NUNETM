#include <stdio.h>
#include <math.h>
int main()
{
    int m,i,num;
    scanf("%d",&m);
    num=sqrt(m);
    for(i=2; i<=num; i++)   //������2��Ϊ��㣬ֻ��ѭ��sqrt(x)�μ���
        if(0==m%num) break;
    if(i>num) printf("True\n"); //�������ݼ�Ϊѭ���Ƿ������˳�
    else printf("False\n");
    return 0;
}
