#include<stdio.h>

void Display(int iNo)
{
  int iCnt = 0;

  //   1         2       3
  for(iCnt=1;iCnt<=iNo;iCnt++)
  {
    printf("%d \t",iCnt);       //4
  }
}
int main()
{
  int iValue=0;
  

  printf("enter number:\n");
  scanf("%d",&iValue);

  Display(iValue);

  return 0;
}