#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[30]; 
    char sen[50];
    scanf("%c", &ch);
    scanf("%s\n", s);
    scanf("%[^\n]%*c", sen);
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);   
    return 0;
}
