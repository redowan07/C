//Write a C program to input basic salary of an employee and calculate its Gross salary according
//to following:
//Basic Salary <= 10000 : HRA = 20%, DA = 80%
//Basic Salary <= 20000 : HRA = 25%, DA = 90%
//Basic Salary > 20000 : HRA = 30%, DA = 95%

#include<stdio.h>
int main(){
    float a,b,c;
    scanf("%f",&a);
    if(a<=10000) {
        b=a*0.2;
        c=a*0.8;
        a+=b+c;
        printf("gross: $%.2f\n",a);
    }else if(a<=20000){
        b=a*0.25;
        c=a*0.9;
        a+=b+c;
        printf("gross: $%.2f\n",a);
    }else if(a>20000){
        b=a*0.3;
        c=a*0.95;
        a+=b+c;
        printf("gross: $%.2f\n",a);
    }
    else printf("invalid input\n");
    
    return 0;
}
