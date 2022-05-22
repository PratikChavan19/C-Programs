#include<stdio.h>

void Demo()
{
    auto int A = 10;
    A++;
    printf("%d\n",A);
}

void Hello()
{
    static int A = 10;
    A++;
    printf("%d\n",A);
}

int main()
{
    Demo();
    Demo();

    Hello();
    Hello();

    return 0;
}