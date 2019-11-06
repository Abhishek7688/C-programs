#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    char b[100];
    printf("Enter First String... \n");
    gets(a);
    printf("Enter Second String... \n");
    gets(b);
    printf("After adding both Strings... \n");
    printf("%s", strcat(a, b));
    getch();
    return 0;
}