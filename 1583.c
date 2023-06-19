#include<stdio.h>
#include<string.h>
#define maxn 100001
int main()
{
    int n, m, i, ans[maxn]={0};
    for(i=1; i < maxn; i++){
        n= i;
        m= i;
        while(n){
            m+= n % 10;
            n/= 10;
        }
        if(ans[m] == 0 || i < ans[m]){
            ans[m] = i;
        }
    }
    int test, input;
    scanf("%d", &test);
    while(test--){
        scanf("%d", &input);
        printf("%d\n", ans[input]);
    }

    return 0;
}
