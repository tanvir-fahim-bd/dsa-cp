#include<stdio.h>
#include<stdbool.h>

// arithmatic, assingment, relational, logical operator
int main(){
    int a, b, sum;
    long long mul;
    bool flag, result;

    scanf("%d %d", &a, &b);

    sum = a+b;
    mul = a*b;
    flag = a < b;
    result = (a < b) && (b>a);

    printf("Sum is: %d\n", sum);
    printf("Mul is: %d\n", mul);
    printf("Bool is: %d\n", flag);
    printf("Logical result: %d\n", result);

    return 0;
}