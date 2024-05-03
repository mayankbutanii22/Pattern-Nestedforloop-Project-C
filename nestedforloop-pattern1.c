#include<stdio.h>
main()
{
	int a,b;
	
	for(a=41; a<=45; a++){
		for(b=41; b<=a; b++){
			printf("%d  ",b);
	   }
	   printf("\n");
	}
}