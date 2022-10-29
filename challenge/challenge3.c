#include<stdio.h>

int main(){
    int a ,b;
    int n=5;
    for(int i=1;i<n;i++){
        for (int j = 1; j <= n-i; j++)
        {
        if (j==n-i)
        { 
            printf("*");
        }
        else
        {
            printf(" ");
        }
        }printf("\n");
    }
    return 0;
}