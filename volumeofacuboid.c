#include<stdio.h>
#include<conio.h>
int main()
{
    int l,b,h,volume=0;
    printf("enter number");
    scanf("%d %d %d",l,b,h);
    volume=l*b*h;
    printf("volume of a cuboid =%d",volume);
    getch();
}