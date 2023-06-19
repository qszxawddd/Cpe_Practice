#include<stdio.h>
#include<stdlib.h>

int main()
{
    int test, n, i, ca=1, k;
    char letter;

    scanf("%d\n", &test);

    while(test--){
        k = 0;
        while(letter = getchar()){
            if(letter == '\n'){
                printf("\n");
                break;
            }
            scanf("%d", &n);
            if(k==0){
                printf("Case %d:", ca++);
                k++;
            }
            for(i=0; i<n; i++){
                printf("%c", letter);
            }
        }
        printf("\n");
    }
    return 0;
}
