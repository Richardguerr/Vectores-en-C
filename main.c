#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define MAX 4

void readVector(int vec[])
{
	int i=0;
	for(i;i<MAX;i++){
	printf("vec[%d]=",(i+1));
	scanf("%d",&vec[i]);
	fflush(stdin);
	
	}
}


void print(int *vec){
	
	int i;
	printf("Salida-----------------\n");
	for(i=0;i<MAX;i++){
		
			printf("vec[%d]=%d", (i+1),vec[i]);
			printf("\n");
	}

	
	
}
int main() {
	
	int vector[MAX];
	
	readVector(vector);
	print(vector);
	return 0;
}
