#include <stdio.h>

int main() 
{
    int n1,n2,n3,max;
    printf("Enter n1 :");
    scanf("%d",&n1);
    printf("Enter n2 :");
    scanf("%d",&n2);
    printf("Enter n3 :");
    scanf("%d",&n3);
    if(n1>n2)
    {
        if(n1>n3)
        {
            max=n1;
        }
        else
        {
            max=n3;
        }
        
    }
    else
    {
        if(n2>n3)
        {
            max=n2;
        }
        else
        {
            max=n3;
        }
    }

    printf("%d is bigest in the three numbers",max);

    return 0;
}