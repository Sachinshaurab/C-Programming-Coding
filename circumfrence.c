#include<stdio.h>
int main()
{
    float circumfrence,r;
    printf("enter radius of a circle");
    scanf("%f", &r);
    circumfrence = 2*r*3.14;
    printf("circumfrence of a circle is %f", circumfrence,r);
    printf("\n");
    return 0;
}