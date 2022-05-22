#include<stdio.h>
#include"Marvellous.h"

int main()
{
    struct Demo obj;
    printf("Inside main\n ");
    printf("%d\n ",sizeof(obj));
    printf("%d \n",MAX);
    fun();

    return 0;
}
void fun()
{
    printf("Inside fun\n");
}
