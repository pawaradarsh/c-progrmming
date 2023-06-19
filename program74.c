#include<stdio.h>   // IO
#include<stdlib.h>  // memory management
  
    int main()     //entry point function
    {
      int iSize = 0;
      int *ptr = NULL;
      int iCnt = 0;

      printf("Enter number of element:\n");
      scanf("%d",&iSize);

      ptr = (int *)malloc(sizeof(int));

      printf("Enter the element:\n");
      for(iCnt=0;iCnt<iSize;iCnt++)
      {
        scanf("%d",&ptr[iCnt]);
      }

      printf("Element of Array are:\n");
       for(iCnt=0;iCnt<iSize;iCnt++)
      {
        printf("%d\n",ptr[iCnt]);
      }
      
      return 0;
    }  
