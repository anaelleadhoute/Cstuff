#include "stdio.h"


int main(){
	int size; 
	int u[size];/*array 1*/
	int v[size];
	int i;
	int num = 0;


	printf("what size "); /*getting size*/
	scanf("%d", &size);
	printf("enter number for u vector \n" );/*getting number for first vector*/
	for(i=0; i<size; i++){
		scanf("%d", &u[i]);
		}
	printf("enter numbers for v vector \n");/*getting number for second vector*/
	for (i = 0; i<size; i++){
		scanf("%d", &v[i]);	
	}
	for(i=0; i<size; i++){ /*multiply each number of each locatin in arrays*/
		num += v[i] * u[i];
	
	}
	printf("the sum is %d /n", num); /*printing*/

	return 0;
}
