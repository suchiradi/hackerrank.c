#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[100];
    char sen[100];

    scanf("%c", &ch);   
    scanf("%s", s);    

    getchar();  //removes the next line displayed after scanf
    fgets(sen, sizeof(sen), stdin);  
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s", sen);  
    return 0;
}
