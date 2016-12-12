/*
 Student Name : Rupak Adhikari
 Subject : programming fundamentals
 Program : WAP to find whether no is odd or even
 LabSheet No : 11
 Roll No : 27
 */

 #include<stdio.h>
 #include<conio.h>
 #include<math.h>

 int main()
 {
     int a;
     printf("Enter any number : \n");
     scanf("%d",&a);
     if (a%2==0)
       {
           printf("Number %d is Even",a);
       }
     else
        {
            printf("Number %d is Odd",a);
        }
     getch ();
     return 0;
 }
