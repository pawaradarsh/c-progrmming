//input 5
//output   -1 -2 -3 -4 -5 0 1 2 3 4 5

#include<stdio.h>

void Display(char iNo)
{
   
  int iCnt = 0;
   //    1        2        3
   
   for(iCnt=-iNo;iCnt<0;iCnt++)
   {
    printf("%d\t",iCnt);     //4
   }
   for(iCnt=1;iCnt<=iNo;iCnt++)
   {
    printf("%d\t",iCnt);     //4
   }
   printf("\n");
}
int main()
{
    int iFrequency = 0;

    printf("Enter the frequency of symbol :\n");
    scanf("%d",&iFrequency);

    Display(iFrequency);

    
    return 0;
}