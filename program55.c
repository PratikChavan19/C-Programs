#include<stdio.h>

int Power(int iNo1, int iNo2)
{
    int iMult = 1;
    register int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        iMult = iMult * iNo1;
    }

    return iMult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter base\n");
    scanf("%d",&iValue1);

    printf("Enter power\n");
    scanf("%d",&iValue2);

    iRet = Power(iValue1, iValue2);

    printf("Result is : %d", iRet);

    return 0;
}