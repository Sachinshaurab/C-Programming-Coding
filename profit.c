#include<stdio.h>
#include<conio.h>
int main()
{
    float profit,cp,sp;
    printf("enter cost prise & selling prise");
    scanf("%f%f", &cp,&sp);
    profit = cp-sp;
    printf("the profit is on per dozen banana is %f", profit);
    getch();
    return 0;
}