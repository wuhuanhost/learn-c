#include <stdio.h>  
#include <stdlib.h>
#include <locale.h>
#include "max.h"  
  
int main(void){
	setlocale(LC_ALL, "chs");
	int num1,num2;
	printf("****************compare the two numbers*******************\n");
	printf("please enter the first number:\n");
	scanf("%d",&num1);//定义字符串接收用户输入
	printf("please enter the second number:\n");
	scanf("%d",&num2);//定义字符串接收用户输入
    printf("The bigger number %d\n", max(num1, num2));  
    system("pause");  
    return 0;
}
