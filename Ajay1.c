#include<stdio.h>

int main()
{
    printf("Hello Readers!!");

     int valid_name = 20;
     printf("%d \n",valid_name);

     int number;
     printf("Enter number : \n");
     scanf("%d ",&number);
     printf("The number entered is %d",number);

     int number1, number2 , number3;
     printf("Enter numbers :\n" );
     scanf("%d %d",&number1 , number2);
     number3 = number1 + number2;
     printf("The sum is : %d",number3);

     return 0;

}