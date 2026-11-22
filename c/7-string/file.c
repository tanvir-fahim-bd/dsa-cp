#include<stdio.h>
#include<stdbool.h> 
#include<limits.h> 

// string
int main(){ 

    // char str[10] = "TanvirFahi";
    char str[25];

    // scanf("%[^\n]s", &str);
    fgets(str, sizeof(str), stdin);

    // printf("My name %s\n", str);
    fputs(str, stdout);

    return 0;
}