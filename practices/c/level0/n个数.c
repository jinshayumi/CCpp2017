#include<stdio.h>
int main()
{
	int m,n,a,i;
	m=1;
	
	printf("n��ֵΪ:");
	scanf("%d",&n);
	printf("����n����");
	
	for(i=1;i<=n;i++)
	{
	scanf("%d",&a);
	printf("\n");
	if(a>m)
	{
		m=a;
		
	}
	}
	printf("������Ϊ%d",m);
 } 	
