#include<stdio.h>
int main() {
	int a = 1;
	int *p = a;
	int *b = p;
	p = &a;
	printf("a�ĵ�ַ%d��\np�ĵ�ַ%d,\nb��ֵ%d��\n", p,&p,b);
	return 0;
}