//Write a C program to input any alphabet and check whether it is vowel or consonant.


#include<stdio.h>
int main(){
    char n;
    scanf("%c",&n);
    if((n>='a'&&n<='z')||(n>='A'&&n<='Z')){
        if(n=='a'|| n=='e' || n=='i'|| n=='o'|| n=='u'||n=='A'||n=='E'||n=='I'||n=='O'||n=='U'){
            printf("vowel\n");
        }else printf("consonant\n");
    }else printf("input is not an alpahbet\n");
    return 0;
}
