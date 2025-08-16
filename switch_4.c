//Write a C program to find maximum between two numbers using switch case.

#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    switch(a>b){
        case 0:
            printf("%d is maximum\n",b);
            break;
        case 1:
            printf("%d is maximum\n",a);
            break;
    }
    return 0;
}
