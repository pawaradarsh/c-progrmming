#include<iostream>
using namespace std;

typedef unsigned int UINT;

// 1111  1111  1111  1111  1111  1111  1011  1111
//  F     F     F     F     F     F      B    F

int OFFBit(UINT iNo)
{
   return (iNo & 0XFFFFFFBF);
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
