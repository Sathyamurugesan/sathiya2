#include<stdio.h>
#include<conio.h>
void amin()
{
int num,r,sum=0,t;
clrscr();
printf("Enter the number:");
scanf("%d",&num);
t=num;
while(num)
{
r=num%10;
num=num/10;
sum=sum*10+r;
}
if(t==sum)
{
printf("The number is palindrome",t);
}
else
{
printf("The number is not a palindrome",t);
}
getch();
}
