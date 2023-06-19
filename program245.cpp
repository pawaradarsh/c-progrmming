#include<iostream>
using namespace std;

typedef unsigned int UINT;

int OFFBit(UINT iNo,UINT iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    iMask=iMask << (iPos-1);

    iResult = iNo & iMask;
    if(iResult==iMask)  //bit is ON
     {
        return (iNo ^ iMask);
     }
     else     //Bit is OFF
     {
        return iNo;
     }
}
int main()
{
    UINT iValue = 0;
    UINT iBit=0;
    UINT iRet = 0;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

     cout<<"Enter the position : "<<"\n";
    cin>>iBit;

    iRet = OFFBit(iValue,iBit);
   cout<<"Result is:"<<iRet<<"\n";

    return 0;
}

