#include<stdio.h>
#include<conio.h>

int main()
{
int a,b,c;
printf("Enter any number : \n");
scanf("%d",&a);
while (a>0)
{
    if (a%2==0)
        printf("Number is Even . ");
    else
        printf("Number is odd");
    a=a-a;
}
getch();
return 0;
}

