#include<stdio.h>
#include<string.h>
int main()
{
    char rotate[7];
    int temp, N;
    while(scanf("%d\n", &N) && N ){
        int t=1, n=2, w=3, e=4, s=5, b=6;
        while(N--){
            scanf("%s", &rotate);
            temp = t;
            if(strcmp(rotate, "north") == 0){
                t = s;
                s = b;
                b = n;
                n = temp;
            }else if(strcmp(rotate,"south") == 0){
                t = n;
                n = b;
                b = s;
                s = temp;
            }else if(strcmp(rotate, "east") == 0){
                t = w;
                w = b;
                b = e;
                e = temp;
            }else if(strcmp(rotate, "west") == 0){
                t = e;
                e = b;
                b = w;
                w = temp;
            }
        }
            printf("%d\n", t);
    }
    return 0;
}
