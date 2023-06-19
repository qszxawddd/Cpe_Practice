#include<stdio.h>
int main()
{
    int n, a, b, c;
    while(scanf("%d %d %d %d", &n, &a, &b, &c)){
        if(n+a+b+c==0){
            break;
        }
        int ans = 720;

        ans += ((40 + n - a) % 40) * 9;

        ans += 360;

        ans += ((40 + b - a) % 40) * 9;

        ans += ((40 + b - c) % 40) * 9;

        printf("%d\n", ans);
    }
    return 0;
}
