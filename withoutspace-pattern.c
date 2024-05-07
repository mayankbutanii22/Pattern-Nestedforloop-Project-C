#include<stdio.h>
main()
{
	int row,col,space;
	
	
        for(row=1; row<=5; row++){
		for(col=1; col<=3; col++){
			printf(" ");
	}
		for(space=1; space<=5; space++){
			if(row==1 || space==1 || row==5 || space==5 || row==space || row!=3 && space!=3)
			{
					printf("* ");
			}else{
				printf("  ");
			}	
			}
			printf("\n");
}
}
			

