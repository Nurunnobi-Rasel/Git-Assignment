#include <stdio.h>

int main() {
    int T;
    scanf("%d",&T);

    while(T--){
        int n,i;
        scanf("%d",&n);

        for( i = n ; i >= 0 ;i--){
            if(i == 1){
                printf("2 + ");
            }
            else if(i == 0){
                printf("1\n");
            }
            else{
                printf("2^%d + ",i);
            }
        }

    }
    return 0;
}