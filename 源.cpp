#include<stdio.h>
int main(void)
{
	char arr[10] = "drererert";//利用数组来装字符串
	int a = sizeof(arr);
	printf("%s\n", arr);//z字符串的输出格式
	printf("数组里面有%d个字符", a);
	return 0;
}