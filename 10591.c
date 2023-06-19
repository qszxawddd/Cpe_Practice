#include<stdiO.h>
int main()
{
  int N, i,input, sum=0, ans=0;

  scanf("%d",&N);
  for(i=1;i<=N;i++){
    scanf("%d",&input);
    ans = input;
    int check[1000] = {0};
    check[1] = 1;
    while(!check[ans]){
        check[ans] = 1;
        sum = 0;
        while(ans != 0){
            sum = sum + (ans % 10) * (ans % 10);
            ans = ans / 10;
        }
    ans = sum;
    }

    if(ans == 1)
    printf("Case #%d: %d is a Happy number.", i, input);
    else
    printf("Case #%d: %d is an Unhappy number.", i, input);
}
    return 0;
}
