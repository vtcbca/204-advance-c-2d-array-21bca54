/*Wap a program to enter 5 value and print only enven num among them*/
#include<stdio.h>
#include<conio.h>
void input();
void print(int []);
void even(int []);
void shorting(int []);
 void main()
{
  char ch;
  clrscr();
  do
  {
  input();
    printf("\n\tDo yo want to continue(yes=Y/y||no=n):");
    flushall();
    scanf(" %c",&ch);
  }while(ch=='y'||ch=='Y');
  getch();
}
void print(int a[])
{
      int i;
      clrscr();
      printf("\nThe array contain this values:\n================================");
      for(i=0;i<5;i++)
	 printf("\n%d",a[i]);

      even(a);

}
void input()
{
   int a[5],i;
   for(i=0;i<5;i++)
    {
       printf("Enter value a[%d]:",i);
       scanf("%d",&a[i]);
    }
    print(a);
    shorting(a);
}
void even(int a[])
{
  int i;
  printf("\nEven numbers:");
  for(i=0;i<5;i++)
  {
     if(a[i]%2==0)
       printf("%d,",a[i]);
  }

}
void shorting(int a[])
{
   int i,j,sw=0;
   printf("\nThe shorted array is:");
   for(i=0;i<5;i++)
   {
     for(j=i+1;j<5;j++)
     {
       if(a[i]>a[j])
       {
	  sw=a[i];
	  a[i]=a[j];
	  a[j]=sw;
       }

     }

   }
   for(i=0;i<5;i++)
     printf("%d,",a[i]);
}