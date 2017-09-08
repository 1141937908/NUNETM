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
    printf("第10回落地共经过%f米\n",s);
    printf("第10回反弹%f米\n",h);
    return 0;
}
