//Write a C program to check whether a number is even or odd using switch case.
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    switch(n%2){
        case 0:
            printf("Even\n");
            break;
        case 1:
            printf("Odd\n");
            break;
    }
    return 0;
}
