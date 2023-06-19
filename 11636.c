#include<stdio.h>

int main()
{
    int n, cut, C=1;
    while(scanf("%d", &n) && n > 0){
        cut = 0;
        for(n--; n > 0; n /= 2){
            cut++;
        }
        printf("Case %d: %d\n",C++, cut);
    }
    return 0;
}

