#include<stdio.h>
#include<string.h>

int main()
{
    //First way
    char Arr[5] = {'a', 'b', 'c', 'd', '\0'};

    //Second way
    char Brr[5] = "abcd";

    printf("%s\n",Arr);
    printf("%s\n",Brr);

    printf("%c\n",Arr[0]);
    printf("%c\n",Arr[1]);
    printf("%c\n",Arr[2]);
    printf("%c\n",Arr[3]);

    printf("Size of string Arr: %d\n",sizeof(Arr));
    printf("Size of string Brr: %d\n",sizeof(Brr));

    printf("Length of string is %d\n",strlen(Arr));
    printf("Length of string is %d\n",strlen(Brr));


    return 0;
}