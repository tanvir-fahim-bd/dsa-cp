#include<stdio.h>
#include<stdbool.h> 

// loop, nested loop, for, while, do while, break, continue
int main(){
    
    //loop
    // for (int i = 97; i <=100; i++)
    // {
    //     printf("%c\n", i);
    // } 


 
    //while
    // int i = 0;
    // while (i<3)
    // {
    //     printf("%d\n", i);
    //     i++;
    // } 




    //nested loop
    // for (int i = 1; i <=5; i+=2)
    // {
    //     for (int k = 0; k <=i; k++)
    //     {
    //         printf("*");
    //     }         
    //     printf("\n");
    // } 

    

    
    
    
    //break
    // for (int i = 97; i <=100; i++)
    // {
    //         if(i == 99) {
    //             break;
    //         }
    //         printf("%c\n", i);
    // } 
    
    
    



    //continue
    for (int i = 97; i <=100; i++)
    {
            if(i == 99) {
                continue;
            }
            printf("%c\n", i);
    } 
 

    return 0;
}