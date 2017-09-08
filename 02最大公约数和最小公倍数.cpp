#include <stdio.h>
int main(){
    int m,n,p,temp;
    scanf("%d%d",&m,&n);
    p=m*n;
    if(m<n){    //保证大数在前，小数在后
        temp=m;
        m=n;
        n=temp;
    }
    while(m%n!=0){  //辗转相除法
        temp=m%n;
        m=n;
        n=temp;
    }
    printf("最大公约数:%d\n最小公倍数:%d\n",n,p/n);
    return 0;
}
