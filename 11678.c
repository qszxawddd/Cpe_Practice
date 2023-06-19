#include<stdio.h>
int main()
{
    int m, n, i, j;

    while(scanf("%d %d", &m, &n)){
        if(m == 0 && n == 0){
            break;
        }
        int a[m], b[n], an=0, bn=0;
        for(i=0; i<m; i++){
            scanf("%d", &a[i]);
            if(i > 0 && a[i] == a[i - 1]){
                a[i - 1] = 0;
            }
        }
        for(i=0; i<n; i++){
            scanf("%d", &b[i]);
            if(i > 0 && b[i] == b[i - 1]){
                b[i - 1] = 0;
            }
        }
        for(i=0, j=0; i < m && j < n;){
            if(a[i] == b[j]){
                a[i]=0;
                b[j]=0;
                i++;
                j++;
            }
            else{
                if(a[i] < b[j]){
                    i++;
                }
                else{
                    j++;
                }
            }
        }
        for(i=0; i<m; i++){
            if(a[i] > 0){
                an++;
            }
        }
        for(i=0; i<n; i++){
            if(b[i] > 0){
            bn++;
            }
        }
        if(an>bn){
            printf("%d\n", bn);
        }
        else printf("%d\n", an);
    }
    return 0;
}
