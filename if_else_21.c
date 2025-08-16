//Write a C program to input electricity unit charges and calculate total electricity bill according
//to the given condition:
//For first 50 units Rs. 0.50/unit
//For next 100 units Rs. 0.75/unit
//For next 100 units Rs. 1.20/unit
//For unit above 250 Rs. 1.50/unit
//An additional surcharge of 20% is added to the bill


#include<stdio.h>
int main(){
    float f,r=0;
    scanf("%f",&f);
    if(f>0){
        if(f<=50){
            r=(f*0.5);
            r+=r*0.2;
        }
        else if(f>50 && f<=150){
            r=(50*0.5);
            f-=50;
            r+=(f*0.75);
            r+=r*0.2;
        }else if(f>150 && f<=250){
            r=(50*0.5)+(100*0.75);
            f-=150;
            r+=(f*1.20);
            r+=r*0.2;
        }else if(f>250){
            r=(50*0.5)+(100*0.75)+(100*1.2);
            f-=250;
            r+=(f*1.5);
            r+=r*0.2;
        }
    }else{
        printf("invalid input.\n");
    }
    printf("total bill: Rs. %.2f\n",r);
    return 0;
}
