#include<stdio.h>

void Display(int iNo)
{
  int iCnt = 0;

  iCnt =iNo;
  while(iCnt>=1)
  {
    printf("%d\t",iCnt);
    iCnt--;
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