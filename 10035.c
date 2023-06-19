#include<stdio.h>
int main()
{
    int num1, num2;

    while(scanf("%d %d", &num1, &num2) && (num1 != 0 || num2 != 0)){

        int count=0, carry=0, sum=0;

        while(num1 || num2){
            sum = num1 % 10 + num2 % 10 + carry;
            if(sum>=10){
                count++;
                carry=1;
            }
            else{
                carry=0;
            }
            num1/=10;
            num2/=10;
        }
        if(count==0){
            printf("No carry operation.\n");
        }

        else if(count==1){
            printf("1 carry opretion.\n");
        }

        else printf("%d carry opretions.\n", count);
    }
    return 0;
}
