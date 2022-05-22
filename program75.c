#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iLength)
{
    register int iCnt = 0;
    int iMin = Arr[0];
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iMin > Arr[iCnt])
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
}

int main()
{
    int iSize = 0, iRet = 0;
    register int iCnt = 0;
    int *ptr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the values of array : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Minimum(ptr, iSize);

    printf("Minimum number is : %d\n", iRet);
    free(ptr);
    return 0;
}

