#include<stdio.h>

int main(){

    int n,rev = 0, temp;
    scanf("%d",&n);

    temp = n;

    while (temp != 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    printf("%d\n",rev);
    
    if (n == rev)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    

    return 0;
}