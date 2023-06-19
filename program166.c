#include<stdio.h>

int Countspace(char *str)
{
   int iCount = 0;
   while(*str!='\0')
   {
     if(*str==' ')
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
   int iRet = 0;

   printf("Enter String:\n");
   scanf("%[^'\n']s",Arr);

   

   iRet = Countspace(Arr);

   printf("number of spaces  are :%d\n",iRet);

     return 0;


}