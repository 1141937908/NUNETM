#include <stdio.h>
int main(){
    int m,n,p,temp;
    scanf("%d%d",&m,&n);
    p=m*n;
    if(m<n){    //��֤������ǰ��С���ں�
        temp=m;
        m=n;
        n=temp;
    }
    while(m%n!=0){  //շת�����
        temp=m%n;
        m=n;
        n=temp;
    }
    printf("���Լ��:%d\n��С������:%d\n",n,p/n);
    return 0;
}
