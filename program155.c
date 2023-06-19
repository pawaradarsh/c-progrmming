#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char cValue)
{
    
    if((cValue>='a')&&(cValue<='z'))
 {
    return true;
 }
 else
 {
    return false;
 }

}

int main()
{
   char ch = '\0';
   bool bRet = 0;

   printf("Enter character:\n");
   scanf("%c",&ch);

   bRet = CheckCapital(ch);

   if(bRet == true)
   {
    printf("%c is a small case letter\n",ch);
   }
   else
   {
    printf("%c is not small case  letter\n",ch);
   }
     return 0;


}