#include<stdio.h>
#include<math.h>

void main()
{	
	int n,i,j;
		
	printf("hello\nenter value=");
	scanf("%d",&n);
	
	i=2;
	while(i<n)
	{
		j=2;
		while(j<i)
		{
			if(i%j==0)
			{
				break;
			}
			j++;
		}
		if(j==i)
		{
			printf("%d ",i);
		}
		i++;
	}
	getch();
}
