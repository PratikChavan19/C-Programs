#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    if(iCnt == iLength)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int iSize = 0, iValue = 0, iCnt = 0;
    bool bRet = false;
    int *ptr = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(sizeof(int) * iSize);

    printf("Enter the values\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    printf("Enter the element you want to search\n");
    scanf("%d",&iValue);

    bRet = Search(ptr, iSize, iValue);

    if(bRet == true)
    {
        printf("%d is present in array\n", iValue);
    }
    else
    {
        printf("%d is not present in array\n", iValue);
    }

    free(ptr);

    return 0;
}