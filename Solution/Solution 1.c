/* Write a program to enter two 3x3 matrix and print its multiplication table
*/


#include<stdio.h>
#include<conio.h>
void main()
{
  int a[3][3],sub[3][3],b[3][3],i,j,n;
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
      printf("Enter the value of b[%d][%d]:",i,j);
      scanf("%d",&b[i][j]);
    }
  }
   printf("\n====================\n");
   for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {

      printf("%d\t",b[i][j]);
    }
    printf("\n");
  }
    printf("\nThe Subtractiontion of Matrix:");
    printf("\n===================\n");
    for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      sub[i][j]=a[i][j]+b[i][j];
      printf("%d\t",sub[i][j]);
    }
    printf("\n");
  }
    getch();

}
