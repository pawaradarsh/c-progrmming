#include<stdio.h>
#include<stdbool.h>

 unsigned long int  CalculatePower(int ibase,int ipower)
{
   int iCnt =0;
    unsigned long int iResult =1;

   if((ibase<0)||(ipower<0))
   {
    return 0;
   }

   for(iCnt=1;iCnt<=ipower;iCnt++)
   {
     iResult = iResult * ibase;
   }
   return iResult;
}

int main()
{
  int iValue1=0, iValue2 =0;
  unsigned long int iRet = 0;

  printf("enter base:\n");
  scanf("%d",&iValue1);

  printf("enter power:\n");
  scanf("%d",&iValue2);

  iRet =CalculatePower(iValue1,iValue2);

  printf("Result is :%d",iRet);

  return 0;
}