#include<stdio.h>
int main()
{
        int N, i, j;

        scanf("%d",&N);

        for(i=0; i<N; i++){
            int height=0, times;
            scanf("%d", &height);
            scanf("%d", &times);
            printf("\n");
            while(times--){
                for(i=1; i<=height; i++){
                    for(j=1; j<=i; j++){
                    printf("%d",i);
                    }
                printf("\n");
                }
                for(i=height-1; i>=1; i--){
                    for(j=1; j<=i; j++){
                    printf("%d",i);
                    }
                printf("\n");
                }
            printf("\n");
            }
        }
        return 0;
}
