#include<stdio.h>
#define ERR_NOTFOUND -1

void Frequency(char *str)
{

   int ismallcnt = 0;
   int icapcnt = 0;

   while(*str!='\0')
   {
    if((*str>='a')&&(*str<='z'))
   {
    ismallcnt++;
   }
   else if((*str>='A')&&(*str<='Z'))
   {
      icapcnt++;
   }
     str++;
}
  printf("small case character count:%d\n",ismallcnt);
  printf("capital case character count:%d\n",icapcnt);

 } 
int main()
{
   char Arr[20];
   
   printf("Enter string:\n");
   scanf("%[^'\n']s",Arr);

    Frequency(Arr);

   return 0; 
}

