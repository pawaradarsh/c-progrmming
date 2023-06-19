//write a program which checks whether number is even or odd.

#include<stdio.h>            // for printf and scanf
#include<stdbool.h>         //for bool data type

///////////////////////////////////////////
//
//funtion name: CheckEvenOdd
//Input : Integer
//output: Boolean
//description: check whether input is even or odd
//author: adarsh prakash pawar
//date: 25/04/2023
//update dateL:26/04/2023
//
///////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    if((iNo % 2)==0)
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

    printf("Please enter number to check whether it is even or odd:\n");
    scanf("%d",&iValue);

    bRet=CheckEvenOdd(iValue);   //funtion call

    if(bRet==true)
    {
        printf("%d is even number:\n",iValue);
    }
    else
    {
        printf("%d is odd number:\n",iValue);
    }
    return 0;
}


    