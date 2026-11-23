#include<stdio.h> 
#include<stdlib.h> 

// function
int add(int a, int b){
    return a+b;
}

int main(){ 
    int res = add( 10, 20);
    printf("Sum is %d", res);
    return 0;
}