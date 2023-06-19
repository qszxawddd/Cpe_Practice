#include<stdio.h>
int main()
{
    long long sum, N, i;
    while(scanf("%llu", &N) == 1){
        sum=0;
        for(i=3; i<=N; i+=2){
            sum = sum +i;
        }
        sum = (sum*2-1)*3;
        printf("%llu\n", sum);
    }
    return 0;
}
