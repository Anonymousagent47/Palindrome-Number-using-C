#include<stdio.h>
int main()
{
    int n,temp,pal,mod,rev=0;
    printf("Enter Your Number:- ");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        mod=n%10;
        rev=rev*10+mod;
        n/=10;
    }
    if(rev==temp){
        printf("This is Palindrome Number");
    }else{
        printf("This is Not Palindrome Number");
    }
    return 0;
}