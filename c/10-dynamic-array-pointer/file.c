#include<stdio.h> 
#include<stdlib.h> 

// dynamic array & pointer
int main(){ 
 
    // pointer 
    // int a = 5;
    // int *b = &a;
    
    // printf("%d\n", b);
    // printf("%d\n", *b);
    
    // *b = 10;

    // printf("%d\n", a);
    // printf("%d\n", *b);
 
    // dynamic array
    int *arr = (int *) malloc(5 * sizeof(int)); 

    for (int i = 0; i < 5; i++)
    {
        arr[i] = i+1;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    

    return 0;
}