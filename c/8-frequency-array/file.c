#include<stdio.h>
#include<stdbool.h> 
#include<limits.h> 
#include<string.h> 

// frequency array
int main(){ 
 
    int n;
    scanf("%d", &n);

    int a[n+5];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);        
    }

    int f[1000000] = {0};

    for (int i = 0; i < n; i++)
    {
        f[a[i]] = 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", f[i]);
    }

    return 0;
}