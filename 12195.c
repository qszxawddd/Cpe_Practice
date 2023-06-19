#include<stdio.h>
int main()
{
    int num=0;
    double duration=0, sum=0;
    char c;
    while(1){
        c=getchar();
        if(c=='\n'){
            printf("%d",num);
            num=0;
        }
        else if(c=='*'){
            break;
        }
        switch(c){
    case'W':
        duration = 1.0;
        break;

    case'H':
        duration = 1.0/2;
        break;

    case'Q':
        duration = 1.0/4;
        break;

    case'E':
        duration = 1.0/8;
        break;

    case'S':
        duration = 1.0/16;
        break;

    case'T':
        duration = 1.0/32;
        break;

    case'X':
        duration = 1.0/64;
        break;

    case'/':
        duration = 0;
        break;
                        }

        if(duration == 0){
            if(sum==1){
                num++;
            }
            sum=0;
        }
        else{
            sum=sum+duration;
        }
    }
    return 0;
}
