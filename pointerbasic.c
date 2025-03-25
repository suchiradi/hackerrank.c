#include <stdio.h>

void update(int *a,int *b) {  
    int sum=*a+*b;
    int diff = (*a > *b) ? (*a - *b) : (*b - *a);  //condition. if (*a>*b),then print (*a-*b) or print (*b-*a) 
    *a=sum;  //assigning the value of sum to *a
    *b = diff;   //assigning the value of diff to *b
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}