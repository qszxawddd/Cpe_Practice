#include<stdio.h>
int main()
{
    long long int n;
    long long int binary[1000];

    while(scanf("%lld", &n) != 0){
            if(n == 0) break;
        long long int binary[1000]={0};
        long long int count=0, i=0;
        while(n){
            binary[i++]=n%2;
            n/=2;
        }
        for(int k=i-1; k>=0; k--){
            if(binary[k]) count++;
        }
        printf("The parity of ");
        for(int k=i-1; k>=0; k--){
            printf("%lld", binary[k]);
        }
        printf(" is %lld (mod 2)\n", count);
    }
    return 0;
}
