/*
    Student Name :Rupak Adhikari
    Roll No : 31
    Program : WAP to make calculator using function
    Subject : Programming Fundamentals
    Date : 2017/1/30
    LabSheet No : 23
*/
#include<stdio.h>
float sum(float a,float b);
float sub(float a,float b);
float mul(float a,float b);
float div(float a,float b);
float main()
{
    float num1,num2,result;
    int cmd;
    printf("Press 1 for sum \n Press 2 for Subract \n Press 3 for multipication \n Press 4 for divide\n");
    scanf("%d",&cmd);
    printf("Enter any two numbers : \n ");
    scanf("%f %f",&num1,&num2);
    switch(cmd)
    {
        case 1:
            result=sum(num1,num2);
            break;
        case 2:
            result=sub(num1,num2);
            break;
        case 3:
            result=mul(num1,num2);
            break;
        case 4:
            result=div(num1,num2);
            break;
        default :
            printf("\t\t\t\t\t\t\tThank You .Please visit again !!");

    }
    printf("Result = %f",result);
}
float sum(float a,float b)
{
    return a+b;
}
float sub(float a,float b)
{
    return a-b;
}
float mul(float a,float b)
{
    return a*b;
}
float div(float a,float b)
{
    return a/b;
}
