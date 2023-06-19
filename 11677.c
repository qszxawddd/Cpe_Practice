#include<stdio.h>
int main()
{
    while(1){
        int h1,m1,h2,m2;
        scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
        if(h1 + m1 + h2 + m2 ==0){
            break;
        }
        if(h1 > h2 || h1 == h2 && m1 > m2){
            printf("%d\n", 1440 - ((h1 -h2) * 60 + m1 - m2));
        }
        else{
            printf("%d\n", (h2 - h1) * 60 + m2 - m1);
        }
    }
    return 0;
}
