#include<stdio.h>
int main()
{
    char c;
    char l[100];
    char w[100];
    
    scanf("%c",&c);
    scanf("%[^\n]",&l);
    scanf("%[^\n]",&w);
    
    printf("%c \n",c);
    printf("%s \n",l);
    printf("%s",w);
    return 0;
    
}
