#include<stdio.h>
#include<stdbool.h> 
#include<limits.h> 

// array, max & min in array
int main(){
    
    //array
    // int arr2[3] = {20,230, 65}; 
    
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("%d\n", arr2[i]);
    // }
    
    //max & min in array
    int n;
    int min = INT_MAX;
    int max = INT_MIN;
    scanf("%d", &n);

    int arr2[n]; 
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        if(arr2[i] < min) min = arr2[i];
        if(arr2[i] > max) max = arr2[i];
    }
    
    printf("Min %d\n", min);
    printf("Max %d\n", max);

    return 0;
}