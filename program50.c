#include<stdio.h>

int SumDigits(int iNo)
{
  int iDigit = 0;
  int iSum = 0;
  

  while(iNo != 0)
  {
    iDigit = iNo % 10;
    iSum = iSum + iDigit;
    
    iNo = iNo / 10;
  }
  return iSum;
}
int main()
{
  int iValue = 0;

  printf("Enter number:\n");
  scanf("%d",iValue);

  SumDigits(iValue);

  return 0;
}
