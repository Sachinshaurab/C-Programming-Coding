#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c,av;
    printf("enter three number");
    scanf("%f %f %f",&a,&b,&c);
    av=(a+b+c)/3;
    printf("average of three number is %f",av);
    getch();
}