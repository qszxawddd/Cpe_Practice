#include<stdio.h>

void bangla(long long n)
{
    if(n >= 10000000){
        bangla(n / 10000000);
        printf(" Kuti");
        n %= 10000000;
    }
    if(n >= 100000){
        printf(" %lld lakh", n / 100000);
        n %= 100000;
    }
    if(n >= 1000){
        printf(" %lld hajar", n / 1000);
        n %= 1000;
    }
    if(n >= 100){
        printf(" %lld shata", n / 100);
        n %= 100;
    }
    if(n)
        printf( " %d", n);
}

int main()
{
    long long n;
    int c = 1;
    while(scanf("%lld", &n)){
        printf("%4d.", c++);
        if(n)
            bangla(n);
        else
            printf(" 0");
        printf("\n");
    }
    return 0;
}
