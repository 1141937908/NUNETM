#include <stdio.h>
#include <math.h>
int main()
{
    int m,i,num;
    scanf("%d",&m);
    num=sqrt(m);
    for(i=2; i<=num; i++)   //这里以2作为起点，只需循环sqrt(x)次即可
        if(0==m%num) break;
    if(i>num) printf("True\n"); //检验依据即为循环是否正常退出
    else printf("False\n");
    return 0;
}
