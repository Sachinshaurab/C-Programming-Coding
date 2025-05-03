#include<stdio.h>
#include<conio.h>
int main()
{
    float base, height,AOT;
    printf("Enter The Value Of Base And Height Are");
    scanf("%f %f",&base,&height);
    AOT=(1/2)*base*height;
    printf("Area Of Triangle Is %f",AOT);
    getch();
}