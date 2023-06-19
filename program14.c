
#include<stdio.h>

void Display(int iNo)
{
  int iCnt=0;

   if(iNo<0)   //updater
   {
     iNo= -iNo;
   }
   
  //      1       2       3
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {         
        printf("jay ganesh...\n");  //4
    }
}

int main()
{ 
    int iValue=0;

    printf("Enter the frequency of jay ganesh statement:\n");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}


    