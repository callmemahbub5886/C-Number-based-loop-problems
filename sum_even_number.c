#include<stdio.h>

int main(){

    int N;
    int sum = 0;
    scanf("%d",&N);

    for (int i = 1; i <= N; i++)
    {
        
        if (i % 2 == 0)
        {
            sum = i + sum;
        }
        
        
    }
    printf("%d\n",sum);
    

    return 0;
}