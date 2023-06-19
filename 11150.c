#include<stdio.h>
int main()
{
   int n, Coke_empty, Coke_sum;

   while(scanf("%d", &n) != EOF){

    Coke_empty=n;
    Coke_sum=n;

        while(Coke_empty >= 3){
            Coke_sum = Coke_sum + (Coke_empty / 3);
            Coke_empty = (Coke_empty / 3) + (Coke_empty %3);
        }
        if(Coke_empty == 2){
            Coke_sum++;
        }
   printf("%d\n", Coke_sum);

   }
   return 0;
}
