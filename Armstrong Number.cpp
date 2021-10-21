#include<stdio.h>
#include<math.h>
int main()
{
	int i,g,s,b;
	for(i=100;i<1000;i++)
	{
		b=i/100;
		s=i/10%10;
		g=i%10;
		    g=pow(g,3);
		    s=pow(s,3);
		    b=pow(b,3);
		    
		if(g+s+b==i)
		    printf("%d\n",i); 		
	}
	return 0;
}
