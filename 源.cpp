/*#include<stdio.h>
#include<string.h>
int main(void)
{
	char arr[10] = "drererert";//����������װ�ַ���
	int a = sizeof(arr);
	int b = strlen(arr);
	printf("%s\n", arr);//z�ַ����������ʽ
	printf("�����������%d���ַ�\n", a);
	printf("����������%d���ֽ�", b);
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
