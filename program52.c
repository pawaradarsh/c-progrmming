#include<stdio.h>
   
   void DisplayDigit(int iNo)
   {
      int iDigit = 0;
      for(;iNo!=0; )
      {
        iDigit= iNo % 10;
        printf("%d",iDigit);
        iNo = iNo / 10;
      }
   }
  int main()
  {
     int iValue = 0;
     
     printf("Enter number:\n");
     scanf("%d",&iValue);

     DisplayDigit(iValue);

     return 0;
  }
