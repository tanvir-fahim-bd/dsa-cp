#include<stdio.h> 
#include<math.h> 

// function
int add(int a, int b){
    return a+b;
}

int main(){ 
    int res = add( 10, 20);
    printf("Sum is %d\n", res);
    printf("Ceil is %lf", ceil(10.15));
    return 0;
}