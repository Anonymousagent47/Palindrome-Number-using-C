#include<stdio.h>
#include<string.h>
 
int main()
{
    char str[20];
    printf("Enter Your Name:= ");
    scanf("%s",&str);

    //H is defined as length of string

    int l = 0;
    int h = strlen(str) - 1;
    while (h > l) {
        if (str[l++] == str[h--]) { //here string will be added by l variable
        // main string will be deducted by h variable
            printf("%s is Palindrome\n", str);
            return 0;
        }
    }
    printf("%s is Not Palindrome\n", str);
    return 0;
}


//Here is Another & Simple way to do it....

#include<stdio.h>
#include<string.h>
int main()
{
    int  cmp;
    char str1[100],str2[100];
    printf("Enter Your String: ");
    scanf("%s",&str1);
    strcpy(str2,str1);
    strrev(str1);
    cmp = strcmp(str1,str2);
    if (cmp==0){
        printf("This is Palindrome String..");
    }else{
        printf("This is Not Palindrome String..");
    }
    return 0;
}
