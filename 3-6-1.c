/*char型和unsigned是同一类型,字符其实就是无符号整型*/
/*

#include<stdio.h>
int main()
{
	char ch1 = 109;
	_int8 x1 = 109;
	char ch2 = 'm';
	unsigned int x2 = 'm';
	
	printf("ch1=%c\n",ch1);
	printf("ch1=%d\n",ch1);
		
	printf("x1=%c\n",x1);
	printf("x1=%d\n",x1);

	printf("ch2=%c\n",ch2);
	printf("ch2=%d\n",ch2);
	
	printf("x2=%c\n",x2);
	printf("x2=%d\n",x2);

	return 0;



}
*/
#include <stdio.h>

int main(void)
{
    char ch1 = 109;
    __int8 x1 = 109;
    char ch2 = 'm';
    unsigned int x2 = 'm';

    printf("ch1=%c\n", ch1);  //字符方式输出
    printf("ch1=%d\n", ch1);  //整型方式输出

    printf("x1=%c\n", x1);    //字符方式输出
    printf("x1=%d\n", x1);    //整型方式输出

    printf("ch2=%c\n", ch2);  //字符方式输出
    printf("ch2=%d\n", ch2);  //整型方式输出

    printf("x2=%c\n", x2);    //字符方式输出
    printf("x2=%d\n", x2);    //整型方式输出

    return 0;
} 
