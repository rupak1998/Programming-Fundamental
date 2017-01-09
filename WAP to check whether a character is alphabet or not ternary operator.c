/*
    Student Name : Rupak Adhikari
    LabSheet No : 16
    Subject : Programming Fundamentals
    Program : WAP to check whether a character is alphabet or not ternary operator
    Date : Jan 9 2017
*/
#include<stdio.h>
#include<conio.h>

int main()
{
    int ASCII;
    char a;
    printf("Enter Character : \n ");
    scanf("%c",&a);
    ASCII=a;
    ((a>=65 && a<=90) || (a>=97 && a<=122))?printf("You have enter Alphabet"):printf("You havenot enter alphabet");
    getch();
    return 0;

}
