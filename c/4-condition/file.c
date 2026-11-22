#include<stdio.h>
#include<stdbool.h> 

// if else, nested, switch case
int main(){
    //ifelse, nested
    // int a, b, c; 

    // scanf("%d %d %d", &a, &b, &c);

    // if(a > b) {
    //     if(a > c) {
    //         printf("A greater than all\n");
    //     }else{
    //         printf("A not greater than all\n");
    //     }
    // }
    // else if(b > a) printf("B greater than A\n");
    // else printf("Equal");


    //switch case
    int day = 8; 
 
    switch (day)
    {
    case 1:
        printf("Saturday");
        break;
    case 2:
        printf("Sunday");
        break;
    case 3:
        printf("Monday");
        break;
    case 4:
        printf("Tuesday");
        break;
    case 5:
        printf("Wednesday");
        break;
    case 6:
        printf("Thursday");
        break;
    case 7:
        printf("Frinday");
        break;
    
    default:
        printf("Invalid day");
        break;
    }

    return 0;
}