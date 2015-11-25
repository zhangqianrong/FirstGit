//字符的输入输出getchar和putchar
/*#include<stdio.h>
int main()
{
	char ich1;
	int ich2,ich3;
		
	char ch1 = 'q';
	char ch2 = 'u';
	char ch3 = 'a';
	char ch4 = 'n';
	
	ich1 = getchar(); //字符类型实际是整数,只是范围小点而已
	ich2 = getchar(); //字符赋值给整数变量没有关系
	ich3 = getchar(); //这三句在屏幕上输入"xue"后回车
	
	putchar(ch1);
	putchar(ch2);
	putchar(ch3);
	putchar(ch4);
	putchar(ich1);
	putchar(ich2);
	putchar(ich3);
	putchar('\n');
	
	return 0;



}*/
#include <stdio.h>

int main(void)
{
    char ich1;
    int  ich2,ich3;

    char ch1 = 'q';
    char ch2 = 'u';
    char ch3 = 'a';
    char ch4 = 'n';


    ich1 = getchar();    //字符类型实际是整型，只是范围小点而已
    ich2 = getchar();    //所以字符赋给整数变量没有关系
    ich3 = getchar();    //这三句在屏幕上输入“xue”后回车

    putchar(ch1);
    putchar(ch2);
    putchar(ch3);
    putchar(ch4);
    putchar(ich1);
    putchar(ich2);
    putchar(ich3);
    putchar('\n');       //这是回车字符

    return 0;
}  
