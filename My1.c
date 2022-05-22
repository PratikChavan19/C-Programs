#include<stdio.h>

extern Addition();

extern Substraction();

int main()
{

    int iNo1 = 0,iNo2 =0,iAdd = 0,iSub = 0;

    printf("Enter first number :");
    scanf("%d",&iNo1);

    printf("Enter second number :");
    scanf("%d",&iNo2);

    iAdd = Addition(iNo1,iNo2);
    iSub = Substraction(iNo1,iNo2);

    printf("Addition is : %d\n",iAdd);
    printf("Substraction is : %d\n",iSub);

    return 0;


}