//Write a C program to input all sides of a triangle and check whether triangle is valid or not.

#include<stdio.h>
int main(){
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if((a+b)>c && (b+c)>a && (c+a)>b) printf("valid\n");
    else printf("invalid\n");
    return 0;
}

