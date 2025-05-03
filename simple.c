#include<stdio.h>
int main()
{
    float a,p,r,t;
    printf("enter the value of p, r, t");
    scanf("%f %f %f", &p,&r,&t);
    a=p*(1+r*t);
    printf("the value of a is %f", a);
    return 0;

}