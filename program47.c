#include<stdio.h>

int CountDigits(int iNo)
{
  int iDigit = 0;

  while(iNo != 0)
  {
    iDigit = iNo % 10;
    printf("%d\n",iDigit);
    iNo = iNo / 10;
  }
  return iDigit;
}
int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter number:\n");
  scanf("%d",iValue);

  iRet = CountDigits(iValue);
  printf("number of digits are:%d\n",iRet);

  return 0;
}
