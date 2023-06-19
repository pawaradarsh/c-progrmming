#include<stdio.h>
#include<stdlib.h>

int Countchar(char *str,char cVAlue)
{
   int iCount = 0;
   while(*str!='\0')
   {
     if(*str=='cValue')
     {
      iCount++;
     }
    str++;
   }
   return iCount;
}

int main()
{
   char Arr[20];
   char ch = '\0';
   int iRet = 0;

   printf("Enter String:\n");
   scanf("%[^'\n']s",Arr);

   fflush(stdin);

   printf("Enter the character:\n");
   scanf("%c",&ch);

   iRet = Countchar(Arr,ch);

   printf("number of occurance are :%d\n",iRet);

     return 0;


}