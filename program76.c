#include<stdio.h>   // IO
#include<stdlib.h>  // memory management
    
    int Addition(int Arr[],int iLength)
    {
        int iSum = 0;
        int iCnt = 0;

        for(iCnt=0;iCnt<iLength;iCnt++)
        {
          iSum = iSum + iLength;
        }
    }
    int main()     //entry point function
    {
      int iSize = 0;
      int *ptr = NULL;
      int iCnt = 0;
      int iRet = 0;

      printf("Enter number of element:\n");
      scanf("%d",&iSize);

      ptr = (int *)malloc(sizeof(int));

      printf("Enter the element:\n");
        scanf("%d",&iSize);
      

      ptr=(int *)malloc(iSize * sizeof(int));
      iRet = Addition(ptr,iSize);

      free(ptr);
      
      return 0;
    }  
