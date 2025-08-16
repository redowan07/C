// Write a C program to check whether a number is divisible by 5 and 11 or not.

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%5==0 && n%11==0) printf("divisible by 5 & 11\n");
    else printf("not divisible\n");
    return 0;
}
