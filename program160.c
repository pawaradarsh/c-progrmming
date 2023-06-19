#include<stdio.h>

int strlenx(char str[])
{
   
}

int main()
{
   char Arr[10];
   int iRet = 0;

   printf("Enter String:\n");
   scanf("%[^'\n']s",Arr);

   printf("Your name is :%s\n",Arr);

   iRet = strlenx(Arr);

   printf("Length of string is :%d\n",iRet);

     return 0;


}