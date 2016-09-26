#include <stdio.h>  
#include <stdlib.h>  
#include "max.h"  
  
int main(void){
	printf("****************两个数比较大小*******************");
	printf("请输入第一个数");
	char *str1=scanf("%s",str);//定义字符串接收用户输入
	int num1=atoi(str1);//用户输入的字符串转换为整型
	printf("请输入第二个数");
	char *str2=scanf("%s",str);//定义字符串接收用户输入
	int num2=atoi(str2);//用户输入的字符串转换为整型
    printf("The bigger one of 3 and 5 is %d\n", max(num1, num2));  
    system("pause");  
    return 0;
}
