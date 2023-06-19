#include<stdio.h>
int main()
{
    int i, N, a, input;
    int digi[10];

    scanf("%d",&N);

    while(N--){
            for(i=0;i<10;i++){
                digi[i]=0;
            }
            scanf("%d",&input);

            for(i=1;i<=input;i++){
            a=i;
            while(a){
            digi[a%10]++;
            a=a/10;
            }

        }
        for(i=0;i<10;i++){
        printf(" %d",digi[i]);
    }
    printf("\n");
    }

    return 0;
}
