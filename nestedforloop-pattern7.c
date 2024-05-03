#include<stdio.h>
main()
{
	int row,col;
	
	for(row=1; row<=5; row++){
		for(col=1; col<=5; col++){
			
			if(row==1 || col!=1 && col==2 || row!=2 && row!=4 || col==5){
				
				printf("* ");
			}else{
				printf("  ");
			}
		}
		printf("\n\n");
	}
}