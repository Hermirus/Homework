#include<stdio.h>
int main()
{
  switch(getchar())
  {
  	case 'M':
	case 'm':
  		printf("Monday");break;
  	case 'T':
	case 't':
	   switch(getchar())
	  {
  		case 'u':
  			printf("Tuesday");break;
  		case'h':
  			printf("Thursday");break;  				
	  }
	  break;
	case 'W':
	case 'w':
  		printf("Wednesday");break;
	case 'F':
	case'f':
  		printf("Friday");break;
	case 'S':
	case 's':	
	switch(getchar())
	  {
		break;
	
  		case 'a':
  			printf("Saturday");break;
  		case'u':
  			printf("Sunday");break;
	  }break;
	  	  	    	
   } 
}
