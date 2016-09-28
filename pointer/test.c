#include <stdio.h>
#include <stdlib.h>

int main(void){
	int *p1,num;
	num=10;
	p1=&num;
	printf("%d\n",p1);
	printf("%d\n",*p1);
	char a,*pa;
	a=10;
pa=&a;
*pa=20;
printf( "%d\n", a);
printf("%s\n","------------------------------------------");
testArr();
	return 0;
}


int testArr(void){
	int i,a[]={3,4,5,6,7,3,7,4,4,6};
    printf("%d\n",a);
	for (i=0;i<=9;i++){
		printf("%d\n",*(a+i));
	}
	return 0;
}
