//Write a C program to print all natural numbers in reverse (from n to 1).– using while loop

#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t>=1){
        printf("%d ",t);
        t--;
    }
    return 0;
}
