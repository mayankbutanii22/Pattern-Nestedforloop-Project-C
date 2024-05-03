#include<stdio.h>
main()
{
	int a,b,space=1;
	 
	 for(a=5; a>=1; a--){
	 	for(space=1; space<=5-b+2; space++){
	 		printf("  ");
		 }for(b=1; b<=a; b++){
		 	printf("%d ",b%2);
		 }
		 printf("\n");
	 }
}