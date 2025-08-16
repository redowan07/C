//Write a C program to check whether a character is uppercase or lowercase alphabet.

#include<stdio.h>
int main(){
    char n;
    scanf("%c",&n);
    if(n>='a'&& n<='z') printf("lowercase alphabet\n");
    else if(n>='A' && n<='Z') printf("UPPERCASE alphabet\n");
    else printf("not an alphabet\n");
    return 0;
}
