#include<stdio.h>
int main()
{
	int n,i,sum=0,mid=1,num,mul=1;
	printf(" ‰»În:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("Sum=%d\n",sum);
	
	for(num=2;num<=n;num++)
	{
		mid+=num;
		mul*=mid;
	}
	printf("Multiply=%d",mul);
	
	return 0;
	 	
}
