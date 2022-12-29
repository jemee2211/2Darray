#include<stdio.h>

main(){
	

	int N;

	int r,c ;
    int sum=0;
    float avg;

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
		for(c=0; c<N; c++){
			
	
			sum+=a[r][c];
            
		
		}

		avg=sum/N;
    	
		
	}
	
	printf("%f",avg);
	
}
