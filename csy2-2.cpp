#include<stdio.h>
int main()
{
	int numb,b,s,g,i,a[2];
 	printf("输入一个正整数：");
	scanf("%d",&numb);
	for(i=0;i<=2;i++)
	{
		a[i]=numb%10;
		numb/=10;
	}
	g=a[0],s=a[1],b=a[2];
		printf("%d+%d+%d=%d",g,s,b,g+s+b);	 
}

