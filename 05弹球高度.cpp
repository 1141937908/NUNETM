#include <stdio.h>
int main()
{
    float s=100,h=s/2;
    int n;
    for(n=2; n<=10; n++)
    {
        s+=2*h;
        h/=2;
    }
    printf("��10����ع�����%f��\n",s);
    printf("��10�ط���%f��\n",h);
    return 0;
}
