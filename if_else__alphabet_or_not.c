#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character :");
    scanf("%c",&ch);
    
    if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
    {
        printf("This Character is alphabet.");
    }
    else
    {
        printf("This Character is not a alphabet.");
    }
    
    return 0;
}