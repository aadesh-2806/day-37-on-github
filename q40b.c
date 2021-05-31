#include<stdio.h>
#include<math.h>

void main()
{	
	int n,i,t;
	
	printf("hello\nenter value=");
	scanf("%d",&n);
	
	i=1;	//q40b.c
	t=0;
	while(i<=n)
	{
		t=t+i;
		i++;
	}
	printf("%d",t);
	getch();
}
