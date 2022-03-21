/*Wa menu driven program to perfom following
task using different type of Function categuri
<1>Prime number
<2>Palindrome number
<3>Reverce Number
<4>Print Even number siries
<5>
<6>Exit*/

#include<stdio.h>
#include<conio.h>
void prime(int);
void palindrome(int);
void reverce(int);
void evenno(int);
int input(int);
int menu();
void main()
{
    int n,f,e,a;
    char ch;
    do
  {
    clrscr();
    printf("\t\tMenu.");
    e=menu();
    switch(e)
    {
     case 1:
	  f=input(a);
	  prime(f);
     break;
     case 2:
	  f=input(a);
	  palindrome(f);
     break;
     case 3:
	  f=input(a);
	  reverce(f);
     break;
     case 4:
	  f=input(a);
	  evenno(f);
     break;
     case 5:
	  exit(0);
     break;
     default:
	  printf("\nInvalid Choice.......");
   }
	 printf("\n\n\tDo You Want to continu(Yes=Y/y||no=N/n):");
	 flushall();
	 scanf("%c",&ch);
   }while(ch=='y'||ch=='Y');
    getch();
}
int menu()
{   int no;
    printf("\n1.Prime.\n2.palindrome.\n3.reverce.\n4.print even number.\n5.Exit");
    printf("\n========================");
    printf("\nEnter your choice:");
    scanf("%d",&no);
    return no;
};
int input(int n)
{
  printf("Enter number:");
  scanf("%d",&n);
  return n;
};
void prime(int n)
{
   int a=0,i,c;
    c=n/2;
    for(i=2;i<=c;i++)
    {
	if(n%2==0)
	{
	   printf("\nThe %d is not prime.",n);
	   a=1;
	   break;
	}
    }
    if(a==0)
	 printf("\nThe %d is prime.",n);
};
void palindrome(int x)
{
   int a,e=0,o,i;
   o=x;
   for(;x!=0;)
   {
	a=x%10;
	e=e*10+a;
	x=x/10;
   }
   if(o==e)
       printf("\nThe %d is palindrome.",o);
   else
       printf("\nThe %d is not palindrome.",o);
};
void reverce(int x)
{
  int e;
  for(;x!=0;)
  {
     e=x%10;
     printf("%d\n",e);
     x=x/10;
  }

};
void evenno(int x)
{
  if(x%2==0)
       printf("\nThe %d is Even.",x);
  else
       printf("\nThe %d is not Even.",x);
};