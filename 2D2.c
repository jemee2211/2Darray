#include<stdio.h>
main(){
	
	int m ;
	int N;
	
	int r,c ;
	int length =0;
	
	printf("Enter Value of m:");
	scanf("%d",&m);
	
	printf("Enter Value of N:");
	scanf("%d",&N);

	int a[m][N];
	
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
	
	length = sizeof(a[r][c])/sizeof(int);
	printf("%d",length);

	
}
