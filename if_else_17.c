#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
            long int n,r;
        scanf("%ld",&n);
        r=n;
        int a=n%10;
        while(r>=0){
            r=r%10;
            r/=10;
        }
       long int sum = a+r;
        printf("Sum = %ld\n",sum);
    }
    return 0;
}
