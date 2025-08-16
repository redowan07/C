//Write a C program to check whether a year is leap year or not.

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%400==0 ||( n%100!=0 && n%4==0)) printf("leap year\n");
    else printf("not leap year\n");
    return 0;
}
