#include<stdio.h>
#include<string.h>
int main()
{
    char i,c0=0,c1=0;
    char n[1001]={0};

    while(scanf("%s", n) != 0){
        if(n[0] == '0' && strlen(n) == 1){
            break;
        }
        else{
            for(i=0; i< strlen(n); i++){
                if(i % 2 ==0){
                    c0 += n[i]-'0';
                }
                else{
                    c1 += n[i]-'0';
                }
            }
            if(c0 % 11 == c1 % 11){
                printf("%s is a multiple of 11.\n");
            }
            else{
                printf("%s is not a multiple of 11.\n");
            }
        }
    }
    return 0;
}
