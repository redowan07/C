//Write a C program to find sum of all odd numbers between 1 to n.
#include<stdio.h>
int main(){
    int r=0,n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2!=0) r+=i;
    }
    printf("%d\n",r);
    return 0;
}
