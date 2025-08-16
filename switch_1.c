//Write a C program to print day of week name using switch case.

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    switch(n){
        case 1:
            printf("saturday\n");
            break;
        case 2:
            printf("sunday\n");
            break;
        case 3:
            printf("monday\n");
            break;
        case 4:
            printf("Tuesday\n");
            break;
        case 5:
            printf("Wednesday\n");
            break;
        case 6:
            printf("Thursday\n");
            break;
        case 7:
            printf("Friday\n");
            break;
        default:
            printf("invalid input\n");
    }
    return 0;
}
