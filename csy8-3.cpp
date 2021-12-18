#include<stdio.h>
void myitoa(int n,char *str)
{
	int i=0,j;
	char s[100];
	while(n>0){
               s[i]=n%10+'0';
			   n=n/10;
			   i++;		
	          }
	for(j=i-1;j>=0;j--)
	    *(str++)=s[j];
	    *str='\0';
}
int main()
{
	int n;
	char x[100];
	printf("Print:");
	scanf("%d",&n);
	myitoa(n,x);
	puts(x);
	return 0;
}