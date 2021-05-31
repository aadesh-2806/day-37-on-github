#include<stdio.h>

void main()
{
	
	int i,s,x,y,u,v,t,n,c[50],d[50],j,r;
	char a[50],b[50][50];
	s=0;
	while(1)
	{
		printf("enter matchstick=");
		scanf("%d",&n);
		s=s+n;
		if(s<21)
		{
			if(n!=4)
			{
				printf("my no=%d",4-n);
				s=s+(4-n);
			}
			else
			{
				printf("my no=4");
				s=s+4;
			}
		}
		else
		{
			printf("you loose");
			break;
		}
	}	
	getch();
	
}	
