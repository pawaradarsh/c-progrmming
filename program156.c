#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char cValue)
{
    
    if((cValue>='0')&&(cValue<='9'))
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
    printf("%c is a digit\n",ch);
   }
   else
   {
    printf("%c is not digit\n",ch);
   }
     return 0;


}