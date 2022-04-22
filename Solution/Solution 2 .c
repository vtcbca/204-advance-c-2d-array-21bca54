/* Write a program to enter matrix and check its is diagonal or not.
*/


#include<stdio.h>
#include<conio.h>
void main()
{
  int a[3][3],i,j,n=0;
  clrscr();
      for(i=0;i<3;i++)
     {
	 for(j=0;j<3;j++)
	{
	   printf("Enter the value of a[%d][%d]:",i,j);
	   scanf("%d",&a[i][j]);
	}
     }
      printf("\n====================\n");
      for(i=0;i<3;i++)
     {
	  for(j=0;j<3;j++)
	 {
	     printf("%d\t",a[i][j]);
	 }
      printf("\n");
     }
     for(i=0;i<3;i++)
    {
	 for(j=0;j<3;j++)
	{
	    if(i!=j && a[i][j]!=0)
	    {
	      n=1;
	      break;
	    }

	}

    }
   if(n==1)
      printf("\nThe matrix is not diagonal:");
   else
      printf("\nThe matrix is  diagonal:");
  getch();

}
