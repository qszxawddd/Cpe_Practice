#include<stdio.h>
int main()
{
    int t, ca = 1;
    int i, site, k;
    char str[1000];

    scanf("%d", &t);
    getchar();
    getchar();
    while(t--){
        printf("Case #%d:\n", ca++);
        while(gets(str)){
            if(str[0] == '\0'){
                break;
            }
            for(i=0, site=1, k=1; str[i] != '\0'; i++, k++){
                if(str[i] == ' '){
                    k = 0;
                }
                if(k == site){
                    printf("%c", str[i]);
                    k++;
                    site++;
                }
            }
            printf("\n");
        }
    }
    return 0;
}
