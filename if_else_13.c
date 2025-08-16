//Write a C program to count total number of notes in given amount.

#include<stdio.h>
int main(){
    int n,k=0,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0;
    scanf("%d",&n);
    if(n>=1000){
        a=n/1000;
        k+=a;
        n-=a*1000;
    }
    if(n>=500){
        b=n/500;
        k+=b;
        n-=b*500;
    }
    if(n>=200){
        c=n/200;
        k+=c;
        n-=c*200;
    }
    if(n>=100){
        d=n/100;
        k+=d;
        n-=d*100;
    }
    if(n>=50){
        e=n/50;
        k+=e;
        n-=e*50;
    }
    if(n>=20){
        f=n/20;
        k+=f;
        n-=f*20;
    }
    if(n>=10){
        g=n/10;
        k+=g;
        n-=g*10;
    }
    if(n>=5){
        h=n/5;
        k+=h;
        n-=h*5;
    }
    if(n>=2){
        i=n/2;
        k+=i;
        n-=i*2;
    }
    if(n>=1){
        j=n/1;
        k+=j;
        n-=j*1;
    }
    
    printf("total notes: %d\n",k);
    printf("1000: %d\n",a);
    printf("500 : %d\n",b);
    printf("200 : %d\n",c);
    printf("100 : %d\n",d);
    printf("50  : %d\n",e);
    printf("20  : %d\n",f);
    printf("10  : %d\n",g);
    printf("5   : %d\n",h);
    printf("2   : %d\n",i);
    printf("1   : %d\n",j);
    return 0;
}
