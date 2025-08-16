
//Write a C program to input week number and print week day.

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==1) printf("saturday\n");
    else if(n==2) printf("sunday\n");
    else if(n==3) printf("monday\n");
    else if(n==4) printf("tuesday\n");
    else if(n==5) printf("wednesday\n");
    else if(n==6) printf("thursday\n");
    else if(n==7) printf("friday\n");
    else printf("invalid input\n");
    return 0;
}
