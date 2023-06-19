#include<stdio.h>
int main()
{
    long long int X, M;
    int b;

    while(scanf("%lld",&X)){
        if(X==0) break;
        for(b=9; b>=0; b--){
            if(((X-b) % 9) == 0){
                M = (X - b) / 9;
                printf("%lld ", X+M);
            }
        }
        printf("\n");
    }
    return 0;
}
