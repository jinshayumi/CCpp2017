#include<stdio.h>
main()
{
	int a;
	printf("����a��ֵ��");
	scanf("%d",&a);
	
	if(a>0)
	printf("aΪ����");
	else if(a==0)
	printf("aΪ0");
	else 
	printf("aΪ����");
	printf("\n");
	
	if(a%2==0)
	printf("aΪż��");
	else 
	printf("aΪ����"); 
	printf("\n");
	
	if(a%13==0)
	printf("aΪ13����");
	else
	printf("a��Ϊ13����");
}
