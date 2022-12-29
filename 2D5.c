#include<stdio.h>
main(){
	

	int N;

	int r,c ;
    
   int sumR;
   int sumC;

	printf("Enter Value of N:");
	scanf("%d",&N);

		int a[N][N];
	
	for(r=0; r<N; r++){
		for(c=0; c<N; c++){
			
			printf("Enter Value of [%d][%d]:",r,c);
			scanf("%d",&a[r][c]);
			
		}
	}

	
	for(r=0; r<N; r++){
	sumR=0;
		for(c=0; c<N; c++){
			
			printf("%d",a[r][c]);
            sumR+=a[r][c];
		
		}
     printf("\n");
     
    	
		
	}
	printf("Sum of Row%d = %d\n",r+1,sumR);
	
	
}
