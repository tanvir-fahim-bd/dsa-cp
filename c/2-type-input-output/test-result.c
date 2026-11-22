#include<stdio.h>

int main(){

    // %lld - long long double
    // %f - float
    // %lf - long long double
    // %c - character
    // %f - takes float

    // int age;
    // char ch;
    float currentWeight;

    // scanf("%d", &age);
    // scanf("%c", &ch); //before take a newline as input
    // getchar();
    scanf("%f", &currentWeight);

    // printf("Your current age is: %d \n", age);
    printf("Your current weight is: %.f \n", currentWeight);
    return 0;
}