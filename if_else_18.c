//Write a C program to calculate profit or loss.

#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter buying price: ");
    scanf("%d",&a);
    printf("enter selling price: ");
    scanf("%d",&b);
    
    c=b-a;
    if(c>0)printf("profit: $%d\n",c);
    else if(c<0)printf("loss: $%d\n",(c*(-1)));
    else printf("no profit, no loss\n");
    return 0;
}

