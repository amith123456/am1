#include<stdio.h>
#include<conio.h>
#define pi 3.14
void main()
{
int r;//local declaration
float a;
printf("enter radius");
scanf("%zd",&r);
a=pi*r*r;   //executable statement
printf("area is %zf",a);
getch();
}
