/*Addition of two number using function*/
#include<stdio.h>
#include<conio.h>
int sum(int, int);
int main()
{
 int a, b;
 printf("Enter the value of a and b:");
 scanf("%d %d",&a, &b);
 printf("The sum of a and b= %d",sum(a,b));
 getch();
 return 0;
}
int sum(int x, int y)
{
 int add;
 add=x+y;
 return add;
}
