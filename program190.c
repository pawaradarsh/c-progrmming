#include<stdio.h>

void strcatX(char *src,char *dest)
{
   while(*dest!='\0')
   {
    dest++;
   }
   *dest=' ';
   dest++;
  
  while(*src!='\0')
  {
    *dest=*src;
    dest++;
    src++;
  }

  *dest='\0';
}  
int main()
{
   char Arr[20];
   char Brr[20]="demo";
   
   printf("Enter string:\n");
   scanf("%[^'\n']s",Arr);

    strcatX(Arr,Brr);

    printf("String after copy is:%s\n",Brr);

   return 0; 
}

