#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,pp;
    printf("Enter The Value Of Cost Prise And Selling Prise");
    scanf("%f %f",&a,&b);
    pp=((a-b)/a)*100;
    printf("Profit Percentage Of Given Values Are %f",pp);
    getch();
}3