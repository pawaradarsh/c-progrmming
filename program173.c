#include<stdio.h>
#define ERR_NOTFOUND -1

int Firstoccurance(char *str,char cValue)
{
   int iCnt = 1;
   

   while((*str!='\0')&&(*str != cValue))
   {
   
      str++;
      iCnt++;

   }
   if(*str=='\0')
   {
      return ERR_NOTFOUND;
   }
   else
   {
      return iCnt;
   }
   
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

   iRet = Firstoccurance(Arr,ch);
   if(iRet==ERR_NOTFOUND)
   {
      printf("there is no character\n");
   }
   else
   {
   printf("First occurance of that character is at:%d\n",iRet);
   }
   
   return 0; 
}

