#include <stdio.h>

int main()
{
    char name[100],country[100],skill;
    int age;
    printf("Welcome to Hacktoberfest 2020\n");
    printf("Enter your name : ");
    scanf("%s",name);
    printf("Enter your Country of Residance : ");
    scanf("%s",country);
    printf("Enter your Age : ");//Get user Age
    scanf("%d",&age);
    printf("Rate your programmings skills from A-D (A being the highest and D being the lowest : ");
    scanf(" %c",&skill);
    printf("Thank you %s Happy Hacking",name);
    return 0;
}
