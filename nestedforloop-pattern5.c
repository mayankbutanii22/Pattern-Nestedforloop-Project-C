#include<stdio.h>
main()
{
	int row,col,space;
	
	for(row=1; row<=5; row++){
			for(col=1; col<=5; col++){
				for(space=1; space<=5; space++){
					
				}
				if(row==1 || col==1 || row==5 || col==5 || row==col || row!=3 && col!=3){
					printf("* ");
				
			}else{
				printf("  ");
			}
	}
	printf("\n\n");
}
}
