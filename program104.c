//input 7
//output 7 6 5 4 3 2 1  

//input 3
//output 3 2 1  

#include<stdio.h>

void Display(char iNo)
{
   char ch = '\0';
   int iCnt = 0;
   //    1        2        3
   for(iCnt=1,ch='A';iCnt<=iNo;iCnt++, ch++)
   {
    printf("%c\t",ch);     //4
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