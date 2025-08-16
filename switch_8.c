//Write a C program to create Simple Calculator using switch case.

#include<stdio.h>
int main(){
    float a,b;
    char c;
    printf("enter two numbers: ");
    scanf("%f %f",&a,&b);
    printf("enter operator(+,-,*,/): ");
    scanf(" %c",&c);
    switch(c){
        case '+':
            printf("result: %.2f\n",(a+b));
            break;
        case '-':
            printf("result: %.2f\n",(a-b));
            break;
        case '*':
            printf("result: %.2f\n",(a*b));
            break;
        case '/':
            printf("result: %.2f\n",(a/b));
            break;
        default:
            printf("invalid operator entered\n");
            break;
    }
    return 0;
}
