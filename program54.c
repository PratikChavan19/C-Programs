#include<stdio.h>

int Power(int iNo1, int iNo2)
{
    int iAns = 1;
    int iCnt = 0;
    for(iCnt = 0; iCnt < iNo2; iCnt++)
    {
        iAns = iAns * iNo1;
    }

    return iAns;

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter base\n");
    scanf("%d",&iValue1);

    printf("Enter power\n");
    scanf("%d",&iValue2);

    iRet = Power(iValue1, iValue2);

    printf("Output is : %d", iRet);

    return 0;
}