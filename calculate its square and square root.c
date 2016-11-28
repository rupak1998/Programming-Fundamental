/*
Student Name : Rupak Adhikari
Subject : Progamming Fundamentals
Lab Sheet No : 07
Program : Calculate Its Square
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
// math.h should be include if  math function are used
int main(){

int a,sqr,sqrroot;

printf(" Enter Your Value\n ");
scanf("%d",&a);

sqr=a*a;
sqrroot=sqrt(a);

printf(" The square of your value is: %d\n",sqr);
printf(" The square root of your value is : %d\n",sqrroot);

getch();
return(0);
}





}
