//Write a C program to check whether a character is alphabet or not.

#include<stdio.h>
int main(){
    char n;
    scanf("%c",&n);
    if((n>='a' && n<='z') || (n>='A' &&  n<= 'Z')){
        printf("alphabet\n");
    }else printf("not an alphabet\n");
    return 0;
}
