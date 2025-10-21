#include<stdio.h>

int main(){
    int x;
    long long factorial = 1; 
    scanf("%d",&x);

    for (int i = 1; i <= x; i++)
    {
        factorial = factorial * i;
    }

    printf("%lld\n",factorial);
    
    return 0;
}