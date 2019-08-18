#include<stdio.h>
#include<conio.h>
int main()
{
  int num,a[10],i,search;
  clrscr();
  printf("Enter the number of term:\n");
  scanf("%d",&num);
  printf("Enter the number:\n");
  for(i=0;i<num;i++)
  {
     scanf("%d",&a[i]);
  }
  printf("Enter the number to search:\n");
   scanf("%d",&search) ;
   for(i=0;i<num;i++)
   {
	if(a[i]==search)
	{
		printf("%d is found at the position %d\n",search,i+1);
		break;
	}
   }
   if(a[i]!= search)
	    printf("%d is not found in the list.",search);
   getch();
   return 0;
}