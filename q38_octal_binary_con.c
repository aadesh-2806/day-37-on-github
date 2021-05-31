#include<stdio.h>

void main()
{
	
	int i,j,n,a[50],b[50];
	printf("hello\nenter number=");
	scanf("%d",&n);
	
	i=n;
	for(j=0;i!=0;j++)
	{
		a[j]=i%2;
		i=i/2;
	}
	for(j--;j>=0;j--)
	{
		printf("%d",a[j]);
	}					
	printf("\n");
	i=n;
	for(j=0;i!=0;j++)
	{
		b[j]=i%8;
		i=i/8;
	}					
	for(j--;j>=0;j--)
	{
		printf("%d",b[j]);
	}					
	
	getch();
	
}	
