//Write a C program to print all alphabets from a to z. – using while loop

#include<stdio.h>
int main(){
    char c='a';
    while(c>='a' && c<='z'){
        printf("%c ",c);
        c++;
    }
    return 0;
}
