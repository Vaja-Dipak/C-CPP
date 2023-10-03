#include <stdio.h>

int main() {
    
    int i,n,ans;
    printf("Enter Number to find it's Factor : ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        printf("%d \n",i);
    }
    
    return 0;
}