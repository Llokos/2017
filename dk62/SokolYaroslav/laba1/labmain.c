#include <stdio.h>
#include "labdk_tool.h"
#include "labdk_tool.c"

int main(void)
{
    int A=0;
    int B=0;
    int C=0;
    ///////////////////////////////vvodim danie
    printf("Введите целое число A = ");
    if(scanf("%i",&A)!=1)
    {
        printf("Вы ввели букву!!!\n");
        exit(0);
    }
    if(A>1000||A<-1000)
    {
        printf("Введите число A от -1000 до 1000!!!\n");
        exit(0);
    }
    //.....................................
    printf("Введите целое число B = ");
    if(scanf("%i",&B)!=1)
    {
        printf("Вы ввели букву!!!\n");
        exit(0);
    }
    if(B>10||B<-10)
    {
        printf("Введите число B от -10 до 10!!!\n");
        exit(0);
    }
    //.....................................
    printf("Введите целое число C = ");
    if(scanf("%i",&C)!=1)
    {
        printf("Вы ввели букву!!!\n");
        exit(0);
    }
    if(C>1000||C<-1000)
    {
        printf("Введите число C от -1000 до 100!!!\n");
        exit(0);
    }
    program1(A,B,C);
}
