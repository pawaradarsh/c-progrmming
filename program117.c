/*
input:

row:3
col:5

output:
a a a a a


*/

#include<stdio.h>

void Display(int iRow,int iCol)
{
   int i = 0, j = 0; 
   char ch = 'a';

   for(i = 1,ch='a';i<=iRow;i++)
   {
    for(j=1;j<=iCol;j++)
    {
      printf("%c\t",ch);
      
      
    }
    ch++;
    printf("\n");
   }
  
}
int main()
{
  int iValue1 = 0, iValue2 = 0;

  printf("Enter number of rows:\n");
  scanf("%d",&iValue1);

  printf("Enter number of colums:\n");
  scanf("%d",&iValue2);

  Display(iValue1,iValue2);
    
    return 0;
}