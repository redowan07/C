//write a C program to check whether an alphabet is vowel or consonant using switch case.

#include<stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    switch(c){
        case 'a':
        case 'i':
        case 'e':
        case 'o':
        case 'u':
        case 'A':
        case 'I':
        case 'E':
        case 'O':
        case 'U':
            printf("vowel\n");
            break;
        default:
            printf("consonant\n");
    }
    return 0;
}
