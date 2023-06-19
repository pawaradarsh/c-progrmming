//input 7
//output   a 1 b 2 c 3 d 4 e 5 f 6 g 7 h 

//input 3
//output a 1 b 2 c 3  

#include<stdio.h>

void Display(char iNo)
{
   char ch = '\0';
   int iCnt = 0;
   //    1        2        3
   for(iCnt=1,ch='A';iCnt<=iNo;iCnt++, ch++)
   {
    printf("%c\t %d\t",ch,iCnt);     //4
   }
   printf("\n");
}
int main()
{
    int iFrequency = 0;

    printf("Enter the frequency of symbol :\n");
    scanf("%d",&iFrequency);

    Display(iFrequency);

    
    return 0;
}