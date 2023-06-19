#include<stdio.h>


int Countchar(char *str)
{
   int iCount = 0;
   while(*str!='\0')
   {
     if(*str=='z')
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

   

   iRet = Countchar(Arr);

   printf("number of z are :%d\n",iRet);

     return 0;


}