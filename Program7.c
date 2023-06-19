//write a program which checks whether number is divisible by 3 and 5

#include<stdio.h>            // for printf and scanf
#include<stdbool.h>         //for bool data type

///////////////////////////////////////////
//
//funtion name: CheckDivisible
//Input : Integer
//output: Boolean
//description: check whether input is divisible by 3 and 5
//author: adarsh prakash pawar
//date: 25/04/2023
//update dateL:26/04/2023
//
///////////////////////////////////////////

bool CheckDivisible(int iNo)
{
    if(((iNo % 3 )==0) && ((iNo % 5)==0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

///////////////////////////////////////////
//Entry point funtion
////////////////////////////////////////////

int main()
{
    int iValue=0;          //variable to accept input
    bool bRet=false;       //variable to accept return value

    printf("Please enter number to check whether it is divisible by 3 and 5:\n");
    scanf("%d",&iValue);

    bRet=CheckDivisible(iValue);   //funtion call

    if(bRet==true)
    {
        printf("%d is completly divisible by 3 and 5\n",iValue);
    }
    else
    {
        printf("%d is not completly divisible by 3 and 5\n",iValue);
    }
    return 0;
}


/*
   logical operators

   1: logical AND &&
   2:logical OR ||
*/    