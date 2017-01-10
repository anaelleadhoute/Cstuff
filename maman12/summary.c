#include "stdio.h"


int *summary(int s1[], int length);

int main(){
/*pointer points to the array returned by summary func*/
	int *p;
/*getting from the user the numbers of the array */
	int size;
	int s1[size];
	int i;
	int y;
	printf("enter size of the array");
	scanf("%d", &size);
	printf("enter num of the array\n");
	for(i = 0; i < size; i ++){
		scanf("%d", &s1[i]);
	}

/*pointer points to the array returned by summary func*/
	p = summary(s1, size);
/*printing*/
	printf("s is %d\n",  *p);
		

	return 0;
}

int *summary(int s1[], int length){
/*pointer points to array*/
	int *pa;
	pa = &s1[0];
	int i;
	int sum=0;
/*pointer points to the sum array*/
	int s2[length];
	for (i = 0; i <length; i ++){
		sum +=  *(pa + i);
		s2[i] = sum;
			
	}
/*pointer points to new array*/
	int *bb;
	bb = &s2[0];
	return bb;
}
