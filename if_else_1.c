//c-program-to-find-maximum-between-two-numbers.

#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b) printf("%d is maximum\n",a);
    else if (a==b) printf("both numbers are equal\n");
    else printf("%d is maximum\n",b);
    return 0;
}

