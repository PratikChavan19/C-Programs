#include<stdio.h>

int main()
{
    int arr[6]={10,20,30};
    int no = 2;
    printf("%d\n",arr[0]);
    printf("%d\n",arr[no]);
    printf("%d\n",arr[3-1]);
    printf("%d\n",arr);
    printf("%d\n",arr+1);
    printf("%d\n",(&arr)+1);
    printf("%d\n",arr+3);
    printf("%d\n",&(arr[3]));
    printf("%d\n",arr[4]);
    printf("%d\n",&(arr[5]));
    printf("%d\n",2[arr]);

    return 0;
}