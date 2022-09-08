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