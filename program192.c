#include<stdio.h>

void strncatX(char *src,char *dest,int iLength)
{
   while(*dest!='\0')
   {
    dest++;
   }
  
  while((*src!='\0')&&(iLength!=0))
  {
    *dest=*src;
    dest++;
    src++;
    iLength--;
    if(iLength==0)
    {
      break;
    }
  }

  *dest='\0';
}  
int main()
{
   char Arr[20];
   char Brr[20]="demo";
   int iNo = 0;
   
   printf("Enter string:\n");
   scanf("%[^'\n']s",Arr);

   printf("enter the number of letter that you want to concate\n");
   scanf("%d",&iNo);

    strncatX(Arr,Brr,iNo);

    printf("String after copy is:%s\n",Brr);

   return 0; 
}

