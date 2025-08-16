//Write a C program to check whether a number is negative, positive or zero.

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n>0) printf("positive\n");
    else if(n<0) printf("negative\n");
    else printf("zero\n");
    return 0;
}
