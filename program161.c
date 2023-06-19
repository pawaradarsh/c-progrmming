#include<stdio.h>

int strlenx(char *str)
{
   int iCount = 0;
   while(*str != '\0')
   {
    iCount++;
    str++;
   }
   return iCount;
}

int main()
{
   char Arr[10];
   int iRet = 0;

   printf("Enter String:\n");
   scanf("%[^'\n']s",Arr);

   

   iRet = strlenx(Arr);

   printf("Length of string is :%d\n",iRet);

     return 0;


}