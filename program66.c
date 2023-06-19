#include<stdio.h>
#include<stdbool.h>

  float DigitAverage(int iNo)
  {
    int iCnt = 0;
    int iDigit =0;
    int iSum =0;

    if(iNo<0)
    {
      iNo=-iNo;
    }

    while(iNo != 0)
    {
      iDigit=iNo%10;
      iSum=iSum+iDigit;
      iCnt++;
      iNo=iNo/10;
    }
    return((float)iSum/(float)iCnt);
  }
  
  int main()
  {
    int iValue= 0;
    float fRet =0.0f;

    printf("Enter number:\n");
    scanf("%d",&iValue);


   fRet = DigitAverage(iValue);

   printf("average of digits is:%f\n",fRet);
    return 0;
  }
