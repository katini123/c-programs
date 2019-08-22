#include<stdio.h>
#include<conio.h>
int swap(int,int);
int main()
{
   int a,b;
   clrscr();
   printf("Enter the value of a and b:");
   scanf("%d %d",&a,&b);
   printf("Before swap\n a =%d, b=%d\n",a,b);
   printf("After swap\n");
   swap(a,b);
   getch();
   return 0;
}
int swap(int a, int b)
{
  int temp;
  temp=a;
  a=b;
  b=temp;
  printf("a=%d and b=%d",a,b);
  return 0;
}