#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter two no a and b: ");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("the numbers after swapping are %d and %d",a,b);
getch();
}
