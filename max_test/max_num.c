#include <stdio.h>  
#include <stdlib.h>
#include <locale.h>
#include "max.h"  
  
int main(void){
	setlocale(LC_ALL, "chs");
	int num1,num2;
	printf("****************compare the two numbers*******************\n");
	printf("please enter the first number:\n");
	scanf("%d",&num1);//接收用户输入的数字赋值给变量num1
	printf("please enter the second number:\n");
	scanf("%d",&num2);//接收用户输入的数字赋值给变量num2
    printf("The bigger number %d\n", max(num1, num2));  
    system("pause");  
    return 0;
}
