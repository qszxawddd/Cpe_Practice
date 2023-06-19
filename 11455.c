#include<stdio.h>
int main()
{
    int n, x, a[4], i, j, k, p;
    scanf("%d",&x);

    for(i=0; i<x; i++){
        scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]);
        for(j=0; j<3; j++){
            for(k=0; k<3; k++){
                if(a[k] > a[k+1]){
                    p=a[k];
                    a[k]=a[k+1];
                    a[k+1]=p;
                }
            }
        }

    if(a[0] == a[3]){
        printf("square\n");
    }
    else if(a[0]==a[1] && a[2]==a[3]){
        printf("rectangle\n");
    }
    else if(a[0]+a[1]+a[2] > a[3]){
        printf("quadrangle\n");
    }
    else printf("banana\n");
    }
    return 0;
}
