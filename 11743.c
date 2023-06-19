#include<stdio.h>
int main(void)
{
    int N, i;
    scanf("%d",&N);
    int cred[16];

    while(N--){
        int a,b,c,d;
        for(i=0;i<4;i++){
            scanf("%d",&a);
            cred[i*4+3]=a%10;
            a/=10;
            cred[i*4+2]=a%10;
            a/=10;
            cred[i*4+1]=a%10;
            a/=10;
            cred[i*4]=a%10;
        }
        b=0,c=0,d=0;
        for(i=0;i<16;i=i+2){
            c=cred[i]*2;
            d=d+c%10;
            c=c/10;
            d=d+c%10;
        }
        for(i=1;i<16;i=i+2){
            b=b+cred[i];
        }
        b=b+d; //奇偶數位總和相加
        if(b%10==0){
            printf("Valid\n");
        }
        else{
            printf("Invalid\n");
        }
    }

    return 0;
}
