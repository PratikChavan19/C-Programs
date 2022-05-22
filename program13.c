// Program to display 5 times Hello on screen

#include<stdio.h>

// Demonstration of  ITERATION

void Display()              // Definition
{
    int iCnt = 0;

    // 1  Initialisation
    // 2  Condition
    // 3  Displacement
    // 4  Loop body

    //       1              2           3
    for(iCnt = 1; iCnt <=5; iCnt++)
    {
        printf("Hello\n");          // 4
    }
}

//  1
//  2     4     3
//  2     4     3
//  2     4     3
//  2     4     3
//  2     4     3
//  2

int main()
{
    Display();                  // Function call

    return 0;
}

