//Write a C program to find sum of all natural numbers between 1 to n.

#include<stdio.h>
int main(){
    int k,r=0;
    scanf("%d",&k);
    for(int i=1;i<=k;i++){
        r+=i;
    }
    printf("%d\n",r);
    return 0;
}
