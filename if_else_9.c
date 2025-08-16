//Write a C program to input any character and check whether it is alphabet, digit or special character.

#include<stdio.h>
int main(){
    char n;
    scanf("%c",&n);
    if((n>='a' && n<='z')||(n>='A' && n<='Z')) printf("alphabet\n");
    else if(n>='0' && n<='9') printf("digit\n");
    else printf("special character\n");
    return 0;
}
