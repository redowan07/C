
//Write a C program to input month number and print number of days in that month.

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==2) printf("28/29 days\n");
    else if(n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12) printf("31 days\n");
    else if (n>1 && n<12) printf("30 days\n");
    else printf("invalid input\n");
    return 0;
}
