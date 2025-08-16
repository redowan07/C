//Write a C program to find all roots of a quadratic equation.
#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c,d,f1,f2;
    printf("Enter a , b , c : ");
    scanf("%lf %lf %lf",&a,&b,&c);
    
    if(a==0){
        printf("this isn't a quadratic equation . a cannot be zero\n");
        return 1;
    }
    d=(b*b)-(4*a*c);
    
    if(d>0){
        f1=(-b+sqrt(d))/(2*a);
        f2=(-b-sqrt(d))/(2*a);
        printf("roots are: %lf , %lf\n",f1,f2);
    }else if(d==0){
        f1=-b/(2*a);
        printf("root is: %lf\n",f1);
    }else{
        f1=-b/(2*a);
        f2=-b/(2*a);
        double i=sqrt(-d)/(2*a);
        printf("two complex roots exists: %lf-i%lf , %lf+i%lf\n",f1,i,f2,i);
    }
return 0;
}
