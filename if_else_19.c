// Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and
//Computer. Calculate percentage and grade according to following:
//Percentage >= 90% : Grade A
//Percentage >= 80% : Grade B
//Percentage >= 70% : Grade C
//Percentage >= 60% : Grade D
//Percentage >= 40% : Grade E
//Percentage < 40% : Grade F


#include<stdio.h>
int main(){
    int p,c,b,m,co;
    printf("enter marks of physics,chem,bio,math & computer: ");
    scanf("%d %d %d %d %d",&p,&c,&b,&m,&co);
   int total=p+c+b+m+co;
    
    float per=total/5.0;
    if(per>=90)printf("grade A\n");
    else if(per>=80)printf("grade B\n");
    else if(per>=70)printf("grade C\n");
    else if(per>=60)printf("grade D\n");
    else if(per>=40)printf("grade E\n");
    else printf("grade F\n");
    return 0;
}
