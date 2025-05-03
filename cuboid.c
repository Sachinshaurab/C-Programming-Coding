#include<stdio.h>
#include<conio.h>
int main()
{
    float cuboid,l,b,h;
    printf("enter the value of length breadth and height");
    scanf("%f%f%f", &l,&b,&h);
    cuboid = l*b*h;
    printf("volume of a cuboid is %f", cuboid);
    getch();
    return 0;
}