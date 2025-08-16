//Write a C program to check whether a number is positive, negative or zero using switch case.

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    switch(n>0){
        case 0:
            switch(n<0){
                case 0:
                    printf("zero\n");
                    break;
                case 1:
                    printf("negative\n");
                    break;
            }
            break;
        case 1:
            printf("positive\n");
            break;
    }
    return 0;
}
