#include<stdio.h>
#include<math.h>

void main()
{	
	int n,i,j,c;
	float t,r,f;
	
	printf("hello\nenter value=");
	scanf("%d",&n);
	
	c=1;
	i=1;
	t=0;
	while(c<=n)
	{
		j=1;
		f=1;
		while(j<=c)
		{
			f=f*j;
			j++;
		}
		r=i/f;
		t=t+r;
		c++;
		i++;
	}
	printf("%f",t);
	getch();
}
