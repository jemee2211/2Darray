#include<stdio.h>
main(){
	
	int m ;
	int N;
	int a[m][N];
	int r,c ;
	
	printf("Enter Value of m:");
	scanf("%d",&m);
	
	printf("Enter Value of N:");
	scanf("%d",&N);

	
	
	for(r=0; r<m; r++){
		for(c=0; c<N; c++){
			
			printf("Enter Value of [%d][%d]:",r,c);
			scanf("%d",&a[r][c]);
		}
	}
	
	
	for(r=0; r<m; r++){
		for(c=0; c<N; c++){
			
		
			printf("%d",a[r][c]);
		}
		
			printf("\n");
	}
	

	
}
