//Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.
#include<stdio.h>
int main(){
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if((a+b)>c && (b+c)>a && (c+a)>b){
    if((a==b) && (b==c)){
        printf("equilateral\n");
    }else if(a==b || a==c || b==c) printf("isosceles\n");
    else printf("scalene\n");
    }
    else printf("invalid triangle\n");
    return 0;
}


