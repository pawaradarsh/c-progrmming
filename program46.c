#include<stdio.h>
#include<stdbool.h>

int  CalculatePower(int ibase,int ipower)
{
   
   int iResult =1;

   int iCnt=1;

   while(iCnt<=ipower)
   {
     iResult = iResult * ibase;
     iCnt++;
   }
   return iResult;
}

int main()
{
  int iValue1=0, iValue2 =0;
  int iRet = 0;

  printf("enter base:\n");
  scanf("%d",&iValue1);

  printf("enter power:\n");
  scanf("%d",&iValue2);

  iRet =CalculatePower(iValue1,iValue2);

  printf("Result is :%d",iRet);

  return 0;
}