#include <stdio.h>
int main(){
    char i,j,k;
    for(i='x';i<='z';i++){
        for(j='x';j<='z';j++){
            for(k='x';k<='z';k++){
                if(i!=j&&i!=k&&j!=k&&i!='x'&&k!='x'&&k!='z')
                    printf("A--%c\nB--%c\nC--%c\n",i,j,k);
            }
        }
    }
    return 0;
}
