#include <stdlib.h> 
 #include <time.h> 
 /* 0-positive_or_negative.c  */ 
  
 /* main: prints if variable n is +ve, -ve or 0 */ 
 int main(void) 
	 { 
		          int n; 
		    
		           srand(time(0)); 
		            n = rand() - RAND_MAX / 2; 
		             
			    if (n > 0)
			    {
				   printf("%d is positive\n", n);
			    }
			    else if ( n == 0)
			    {
				   printf("%d is zero\n", n);
			    }
			    else
			    {
				   printf("%d is negative\n", n);
			    }

			              return (0); 
		      }
