#include "Header59.h"

int main()
{
    int iValue1 = 0, iValue2 = 0;
    ULONG lRet = 0;

    printf("Enter base\n");
    scanf("%d",&iValue1);

    printf("Enter power\n");
    scanf("%d",&iValue2);

    lRet = Power(iValue1, iValue2);

    printf("Result is : %ld", lRet);

    return 0;
}