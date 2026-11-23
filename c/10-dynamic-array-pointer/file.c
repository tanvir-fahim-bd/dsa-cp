#include<stdio.h> 

// dynamic array & pointer
int main(){ 
 
    int a = 5;
    int *b = &a;
    
    printf("%d\n", b);
    printf("%d\n", *b);
    
    *b = 10;

    printf("%d\n", a);
    printf("%d\n", *b);

    return 0;
}