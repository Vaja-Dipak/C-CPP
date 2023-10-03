#include <stdio.h>

int main() {
    
    int n,r,c,sum=0;
    printf("Enter Number:");
    scanf("%d",&n);
    c=n;
    
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    
    if(c==sum)
    {
        printf("%d is Palindrome.",c);
    }
    else
    {
        printf("%d is not a Palindrome.",c);
    }

    return 0;
}
