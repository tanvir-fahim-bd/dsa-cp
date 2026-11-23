#include<stdio.h> 

// recursive function
int fun(int a, int n){
    if(a > n) return;
    printf("%d\n", a);
    fun(a+1, n);
}

int main(){ 
    fun(1,6);
    return 0;
}