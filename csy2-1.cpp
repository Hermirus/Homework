#include<stdio.h>
int main()
{
	double p;
	  printf("��������\n");
	  scanf("%lf",&p);
	   if(p<50000)	    
		  printf("û�����"); 	  		  		  
	   else if(p>=50000&&p<100000)	 		  
		  printf("���Ϊ��%lf",p/10);			
	   else if(p>=100000&&p<200000) 		  		  
		  printf("���Ϊ��%lf",p/7.5);				 	
	   else if(p>=200000&&p<300000)		 		 
		  printf("���Ϊ��%lf",p/0.5);					 
	   else if(p>=300000)			
		  printf("���Ϊ��%lf",p/0.2);				 
}	 
		 
		 
		 
		 	

		  
