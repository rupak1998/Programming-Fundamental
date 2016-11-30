/* Student name : Rupak Adhikari
Roll No :
Subject : Programming Fundamentals
Labsheet No : 008
Program : WAP to print your name
*/


#include<stdio.h>
#include<conio.h>

int main()

{
    int a,b;
    printf("Enter First NO\n");
    scanf("%d",&a);
    printf("Enter Second NO\n");
    scanf("%d",&b);
    a+=b;
    printf("values is+=%d\n",a);
    a-=b;
    printf("values of -=%d\n",a);
    a*=b;
    printf("values of *=%d\n",a);
    a/=b;
    printf("values of /=%d\n",a);
    getch();
    return(0);



}
