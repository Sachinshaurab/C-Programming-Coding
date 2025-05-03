/*Calculate Ramesh Gross Salary*/
#include<stdio.h>
#include<conio.h>
int main()
{
float da,hr,gs,bs;
printf("\nEnter Basic Salary Of Ramesh");
scanf("%f,&bs");
da=0.4*bs;
hr=0.2*bs;
gs=bs+hr+da;
printf("Basic Salary Of Ramesh=%f\n",bs);
printf("Dearness Allowance=%f\n",da);
printf("House Rent Allowanc=%f\n",hr);
printf("Gross Pay Of ramesh Is %f\n",gs);
getch(); 
}