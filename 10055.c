#include<stdio.h>

int main(){

    long long x, y;
    long long i;

    while(scanf("%lld %lld", &x, &y) != EOF){
        if(x >  y){
            i=x-y;
        }
        else i=y-x;
        printf("%lld\n",  i);
    }

    return 0;
}
