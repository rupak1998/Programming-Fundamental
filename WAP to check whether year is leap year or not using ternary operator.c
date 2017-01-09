/*
    Student Name : Rupak Adhikari
    LabSheet No : 16
    Subject : Programming Fundamentals
    Program : WAP to check whether year is leap year or not using ternary operator
    Date : Jan 9 2017
*/
#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    printf("Enter Year : \n");
    scanf("%d",&a);
    ((a%4==0 || a%400==0 || a%100==0))?printf("Year is leap"):printf("Year isnot leap");
    getch();
    return 0;
}
