// Write a C program to input angles of a triangle and check whether triangle is valid or not.

#include<stdio.h>
int main(){
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if((a+b+c)==180 && a>0 && b>0 && c>0){
            printf("valid triangle\n");
    }else printf("invalid triangle\n");
    return 0;
}
