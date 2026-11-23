#include<stdio.h>
#include<stdbool.h> 
#include<limits.h> 
#include<string.h> 

// string
int main(){ 

    // char str[10] = "TanvirFahi";
    // char str[25];
    // char str[] = "BD is so \"nice\" count\\ry";
    char str[10] = "TanvirFahi";


    // scanf("%[^\n]s", &str);
    // fgets(str, sizeof(str), stdin);
    
    // printf("My name %s\n", str);
    // fputs(str, stdout);

    // int length = 0;
    // for (int i = 0; str[i] != '\0'; i++)
    // {
    //     length++;
    // }
    // printf("%d\n", length);


    int length = strlen(str);    

    printf("%d\n", length);

    return 0;
}