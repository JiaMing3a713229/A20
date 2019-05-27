/*
作業20:請撰寫一個程式，
用巨集定義數學函式
f(a,b,c) = (a+b+c)(a-b-c)，
並由鍵盤輸入a、b、c值。 
*呂家明 3a713229
*108/5/25
*/ 
#include<stdio.h>
#include<stdlib.h>

#define f (a+b+c)/(a-b-c)

int main(void){
	
	int a,b,c;
	
	printf("請輸入a,b,c:");
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	printf("\nresult:%d\n",f);
	
	system("pause");
	return 0;
}
