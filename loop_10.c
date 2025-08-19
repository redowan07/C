//Write a C program to count number of digits in a number.

#include<stdio.h>
int main(){
    int n,k=0;
    scanf("%d",&n);
    while(n>0){
        k++;
        n/=10;
    }
    printf("%d\n",k);
    return 0;
}
