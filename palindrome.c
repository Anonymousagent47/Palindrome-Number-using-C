#include<stdio.h>
int main()
{
    int n,mod,rev=0;
    printf("Enter Your Number:- ");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        mod=n%10;
        rev=rev*10+mod;
        n/=10;
    }
    if(rev==n){
        printf("This is Palindrome Number");
    }else{
        printf("This is Not Palindrome Number");
    }
    return 0;
}

//In FOR LOOP
for(n;n<0;n/=10){
    mod=n%10;
    rev*=10+mod;
}

//DO..WHILE LOOP
do{
    mod=n%10;
    rev*=10+mod;
    n/=10;
}while(n!=0);
