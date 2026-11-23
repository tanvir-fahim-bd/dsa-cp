#include<stdio.h> 
#include<string.h> 
#include<ctype.h> 

// recursive pointer
// void makeFirstCharUpper(char x[]){
//     x[0] = toupper(x[0]);
//     printf("%s", x);
// }

// int main(){ 
//     char a[20] = "programming";
//     makeFirstCharUpper(a);
//     return 0;
// }



//palindrom array
int isPalindrom(int *a, int i, int j){ 
    if(i>j) return 0;
    return a[i] != a[j] || isPalindrom(a, i+1, j-1);
}

int main(){ 
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    if(isPalindrom(a, 0, n-1)){
        printf("NO\n");
    }else{
        printf("YES\n");
    }
    
    return 0;
}