#include<stdio.h>
#define ERR_NOTFOUND -1

int Lastoccurance(char *str,char cValue)
{
   int iCnt = 1;
   int iPos = ERR_NOTFOUND;

   while(*str!='\0')
   {
      if(*str==cValue)
      {
         iPos = iCnt;
         
      }
      str++;
      iCnt++;

   }
   return iPos;
}

int main()
{
   char Arr[20];
   char ch = '\0';
   char iRet = 0;

   printf("Enter string:\n");
   scanf("%[^'\n']s",Arr);

    printf("Enter the character:\n");
   scanf(" %c",&ch);

   iRet = Lastoccurance(Arr,ch);
   if(iRet==ERR_NOTFOUND)
   {
      printf("there is no character\n");
   }
   else
   {
   printf("last occurance of that character is at:%d\n",iRet);
   }
   
   return 0; 
}

