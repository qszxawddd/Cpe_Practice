#include<stdio.h>
#include<math.h>

int main()
{
    int n, s[15], test;
    int i, j, temp, k;

    scanf("%d", &test);
    while(test--){
        scanf("%d", &n);
        for(i=0; i<n; i++){
            scanf("%d", &s[i]);
        }
        for(i=0; i < 1000; i++){
            for(j=0, temp=s[0]; j<n-1; j++){
                s[j] = abs(s[j] - s[j+1]);
            }
            s[n-1] = abs(s[n-1] - temp);
        }
        for(i=0, k=0; i < n; i++){
            if(s[i] != 0){
                k=1;
                break;
            }
        }
        if(k==0){
            printf("ZERO\n");
        }
        else{
            printf("LOOP\n");
        }
    }
    return 0;
}
