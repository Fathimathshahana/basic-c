#include <stdio.h>
int main(){

    int sum,mul,div,sub,n;
    int num1,num2;
    printf("enter the two numbers:");
    scanf("%d %d",&num1,&num2);
    printf("enter the operation");
    scanf("%d",&n);
    if (n==1){
        sum= num1+num2;
        printf("%d",sum);
    }
    
    if (n==2){
        mul= num1*num2;
        printf("%d",mul);
    }
    if (n==3){
        div= num1/num2;
        printf("%d",div);
    }
    if (n==4){
        sub= num1-num2;
        printf("%d",sub);
    }
    if(n>4){
        printf("enter invalid input");
    }

}