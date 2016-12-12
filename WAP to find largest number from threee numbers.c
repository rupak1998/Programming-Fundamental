/*
 Student Name : Rupak Adhikari
 Subject : Programming Fundamentals
 Program : WAP to find largest number from three numbers
 Roll No : 27
 LabSheet no : 11
 */

 #include<stdio.h>
 #include<conio.h>

 int main ()
 {
 int a,b,c;
 printf("Enter any First Numer :\n ");
 scanf("%d",&a);
 printf("Enter any Second Number : \n");
 scanf("%d",&b);
 printf("Enter any Third Number :\n");
 scanf("%d",&c);
 if ((a>b && a>c))
 {
     printf("No %d is largest among three numbers",a);
 }
 else if ((b>a && b>c))
 {
     printf("No %d is largest among three numbers",b);
 }
 else
 {
     printf(" %d is largest among three numbers",c);
 }
 getch();
 return 0;

 }
