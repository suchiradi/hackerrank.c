#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    printf("Hello, World!\n");
    scanf("%[^\n]%*c", &s);
  	printf("%s",s); 
    return 0;
}

