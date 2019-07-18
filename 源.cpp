/*#include<stdio.h>
#include<string.h>
int main(void)
{
	char arr[10] = "drererert";//利用数组来装字符串
	int a = sizeof(arr);
	int b = strlen(arr);
	printf("%s\n", arr);//z字符串的输出格式
	printf("数组里面分配%d个字符\n", a);
	printf("数组里面有%d个字节", b);
	return 0;
}*/
/*#include<stdio.h>
int main(void)
{
	int a, b, c;
	scanf_s("%d, %d, %d", &a, &b, &c);
	printf("%d\t%d\t%d\n", a, b, c);
	return 0;
}*/
#include<stdio.h>
int main(void)
{
	int a;
	char b;
	double c;
	scanf_s("%d, %c, %lf", &a, &b, &c);
	printf("%d\t%c\t%lf\n", a, b, c);
	return 0;
}
