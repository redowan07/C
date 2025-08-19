//Write a C program to find sum of all even numbers between 1 to n.

#include<stdio.h>
int main(){
    int i=0,n;
    scanf("%d",&n);
    for(int j=1;j<=n;j++){
       if(j%2==0) i+=j;
    }
    printf("%d\n",i);
    return 0;
}
