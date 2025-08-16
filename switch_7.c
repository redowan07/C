//Write a C program to find roots of a quadratic equation using switch case.

#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,r1,r2;
    scanf("%f %f %f",&a,&b,&c);
    float d=(b*b)-(4*a*c);
    switch(a==0){
        case 0:
                switch(d>0){
                case 1:
                    r1=(-b+sqrt(d))/(2*a);
                    r2=(-b-sqrt(d))/(2*a);
                    printf("roots are: %.2f,%.2f\n",r1,r2);
                    break;
                case 0:
                    switch(d<0){
                        case 0:
                            r1=r2=-b/(2*a);
                            printf("roots are: %.2f,%.2f\n",r1,r2);
                            break;
                        case 1:
                            r1=r2=(-b)/(2*a);
                            double i=sqrt(-d)/(2*a);
                            printf("roots are: %.2f+i%.2lf, %.2f-i%.2lf\n",r1,i,r2,i);
                            break;
                    }
                    break;
            }
            break;
        case 1:
            printf("'a' cannot be zero\n");
            return 1;
    }
    return 0;
}
