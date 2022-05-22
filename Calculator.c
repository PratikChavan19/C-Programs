#include<iostream>
using namespace std;

class Calculator
{
    public:
        int x;
        int y;

        int Addition(int iNo1, int iNo2)
        {
            int iAns = 0;
            x = iNo1;
            y = iNo2;
            iAns = x + y;
            return iAns;
        }

        int Substraction(int iNo1, int iNo2)
        {
            int iAns = 0;
            x = iNo1;
            y = iNo2;
            iAns = x - y;
            return iAns;
        }

        int Multiplication(int iNo1, int iNo2)
        {
            int iAns = 0;
            x = iNo1;
            y = iNo2;
            iAns = x*y;
            return iAns;
        }

        int Division(int iNo1, int iNo2)
        {
            int iAns = 0;
            x = iNo1;
            y = iNo2;
            iAns = x/y;
            return iAns;
        }

};

int main()
{
    int iValue1, iValue2, choice, iRet;
    Calculator obj;

    cout<<"Enter two numbers\n";
    cin>>iValue1>>iValue2;

    cout<<"1.Enter 1 for Addition\n2.Enter 2 for Substraction\n3.Enter 3 for Multiplication\n4.Enter 4 for division";
    cin<<choice;

    switch(choice)
    {
        case 1:
            iRet = obj.Addition(iValue1, iValue2);
            cout<<"Addition is : "<<iRet<<"\n";
            break;

        case 2:
            iRet = obj.Substraction(iValue1, iValue2);
            cout<<"Substraction is : "<<iRet<<"\n";
            break;

        case 3:
            iRet = obj.Multiplication(iValue1, iValue2);
            cout<<"Multiplication is : "<<iRet<<"\n";
            break;

        case 4:
            iRet = obj.Division(iValue1, iValue2);
            cout<<"Division is : "<<iRet<<"\n";
            break;

        default:
            cout<<"Invalid Input\n";
    }

    return 0;
}