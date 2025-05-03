#include<stdio.h>
int main()
{
    float avg,a,b,c;
    printf("enter three integers");
    scanf("%f%f%f", &a,&b,&c);
    avg = (a+b+c)/3.0;
    printf("the sum of three integers is %f", avg,a,b,c);
    printf("\n");
    return 0;

}