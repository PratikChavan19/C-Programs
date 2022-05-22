#include<stdio.h>

int main()
{
   auto int Marks = 0;

   printf("Enter your Marks \n");
   scanf("%d",&Marks);

   printf("Your entered Marks : %d\n",Marks);

    if(Marks >= 60)
    {
        printf("First class \n");
    }
    else
    {
        printf("Not a first class \n");
    }


    return 0;
}