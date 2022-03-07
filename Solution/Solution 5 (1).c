/*wap to enter 5 string and print it*/
#include<stdio.h>
#include<conio.h>
void main()
{
    char s[5][10]; //s Contain 5 string and each string has 9 Character
    int i,v,j;
    clrscr();
    //logic :to Input 5 string
    for(i=0; i<5; i++)
    {
        printf("Enter name %d:",i+1);

        gets(s[i]);
    }
// Logic:  TO how many vovels in string.
    printf("\n========================\n");

    for(i=0; i<5; i++)
    {
        printf("Vovel in string .");
        for(j=0; j<5; j++)
        {
               
          
            if(s[i][j]=='A'||s[i][j]=='E'||s[i][j]=='I'||s[i][j]=='O'||s[i][j]=='U'||s[i][j]=='a'||s[i][j]=='e'||s[i][j]=='i'||s[i][j]=='o'||s[i][j]=='u')
            { 
               v++;
               printf("%d,",v);
               printf("%c,",s[i][j]);
                 
            }
             
        }printf("\n");
    }
    getch();
}