/*
�@�~20:�м��g�@�ӵ{���A
�Υ����w�q�ƾǨ禡
f(a,b,c) = (a+b+c)(a-b-c)�A
�å���L��Ja�Bb�Bc�ȡC 
*�f�a�� 3a713229
*108/5/25
*/ 
#include<stdio.h>
#include<stdlib.h>

#define f (a+b+c)/(a-b-c)

int main(void){
	
	int a,b,c;
	
	printf("�п�Ja,b,c:");
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	printf("\nresult:%d\n",f);
	
	system("pause");
	return 0;
}
