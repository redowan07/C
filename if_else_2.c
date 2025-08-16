//Write a C program to find maximum between three numbers.

#include<stdio.h>
int main(){
    printf("hello\n");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("%d is maximum\n",a);
    }else if(b>a && b>c){
        printf("%d is maximum\n",b);
    }else if(a==b && b==c){
        printf("all numbers are equal\n");
    }
    else{
        printf("%d is maximum\n",c);
    }
    return 0;
}
