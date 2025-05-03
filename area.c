#include<stdio.h>
#include<conio.h>
int main()
{
    float H,B,AOT;
    printf("enter the value of B and H ");
    scanf("%f %f",&B,&H);
    AOT=(1/2)*B*H;
    printf("area of triangle is %f",AOT);
    getch();
}