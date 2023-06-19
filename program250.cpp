#include<iostream>
using namespace std;

typedef unsigned int UINT;

// 1111  1111  1111  1111  1111  1111  1011  1111
//  F     F     F     F     F     F      B    F

int OFFBit(UINT iNo)
{
    UINT iMask = 0XFFFFFFBF;
    return iNo & iMask;
}
int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    iRet = OFFBit(iValue);
   cout<<"Result is:"<<iRet<<"\n";

    return 0;
}
