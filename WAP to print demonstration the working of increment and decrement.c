/* Student Name : Rupak Adhikari
   Subject : Programming Fundamentals
   Project : WAP to demonstration the working of increment and decrement operators
   Roll No :
   LabSheet No : 09
   Date : Dec 2nd
*/
 #include<stdio.h>
 #include<conio.h>


 int main()

 {
     int a,inc,dec;
     printf("Enter The Value : \n");
     scanf("%d",&a);

     printf("Increment Post : %d\n",a++);
     printf("increment pre  : %d\n",++a);
     printf("decrement post : %d\n",a--);
     printf("decrement pre  : %d\n",--a);
     getch();
     return(0);
 }
