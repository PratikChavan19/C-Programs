#include<stdio.h>

struct Demo
{
    int no;
    struct Demo *sp;
};

int main()
{
    struct Demo obj1,obj2,obj3;
    obj1.no = 19;
    struct Demo *p = &obj1.no;

    obj2.no = 14;
    obj1.sp = &obj2.no;

    obj3.no= 21;
    obj2.sp = &obj3.no;

    obj3.sp = NULL;

    printf("%d\n",obj1.no);
    printf("%d\n",p);
     printf("%d\n",&(obj1.no));
    printf("%d\n",obj1.sp);
    printf("%d\n",&(obj2.no));
    printf("%d\n",obj2.no);
    printf("%d\n",obj2.sp);
    printf("%d\n",&(obj3.no));
    printf("%d\n",obj3.no);
    printf("%d\n",obj3.sp);

    return 0;
}