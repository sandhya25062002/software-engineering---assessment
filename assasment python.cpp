#include<stdio.h>
main()
{
	int matrix1[2][2];
	int matrix2[2][2];
	int result [2][2];
	
	printf("enter elements of matrix 1\n");
	
	 for(int i=0;i<2;i++)
	 {
	 	for(int j=0;j<2;j++)
		 {
	 		printf("matrix1[%d][%d]:" , i , j);
	 		scanf("%d", &matrix1[i][j]);
		 }
	 }
	  printf("\n");
	  
	 printf("enter eliments of matrix 2\n");
	    for(int i=0;i<2;i++)
		{
	    	for(int j=0;j<2;j++)
			{
	    		printf("matrix2[%d][%d]:" , i , j);
	 		     scanf("%d", &matrix2[i][j]);
			}
		}
		printf("\n");
	
		 for(int i =0;i<2; i++)
		 {
		 	for(int j=0;j<2;j++)
			 {
		 		result[i][j] = matrix1[i][0] * matrix2[0][j] +
		 		               matrix1[i][1] * matrix2[1][j];
		 		               
			 }
			 
			 
		 }
		   printf("result of matrix1 * matrix2 :\n");
		   
		   
		     for(int i = 0; i<2; i++)
			 {
		     	for(int j = 0; j<2; j++)
				 {
		     		
		     		printf("%d\t", result[i][j]);
				 }
				 
				   printf("\n");
			 }
	         
}

