#include <stdio.h>
#include "dk_tool.h"
 int enterNumberIn10(void)
{
	int a;
	printf("Enter a number in 10-system: ");   //������ ������������ ������ ����� � 10-�������
	do
	{
	    int theTmp = scanf("%d",&a);         
	    if(theTmp == 1)                            //����������� �� ��� ���� ������������
	    {
		    break;
	    }
	    printf("Please,try again: ");
	    fflush(stdin);
    }
	while(1);
	
    return a;                               //���������� � main.c
}

int enterNumberIn16(void)
{
	int b;
	printf("Enter a number in 16-system: ");             // ������ ������������ ������ ����� � 16-�������
	do
	{
	int theTmp = scanf("%x",&b);
	if(theTmp == 1)
	{                                      //����������� �� ��� ���� ������������
        break;
    }
	printf("Please,try again: ");
	fflush(stdin);
    }
	while(1);
    return b;               // ����������  � main.c
}

int theSum(int D,int F, int C)
{
	int A;
	int Q;
	
	for( A = 1; A <= D; A++)
	{
	    Q += A *(F - C);                 //��������� ���� ������� �����
    }
        
    return Q;     //���������� �������� ���� � main.c
    
}
