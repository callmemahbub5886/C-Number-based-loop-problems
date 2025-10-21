#include<stdio.h>

int main(){

    int N;
    int sum = 0;
    scanf("%d",&N);

    while (N !=0)
    {
        sum = sum + N % 10;
        N/=10;
    }
    
    printf("%d\n", sum);
    

    return 0;
}