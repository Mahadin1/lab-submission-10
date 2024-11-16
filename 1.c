#include<stdio.h>


void printarray(int array[],int size);

int main(){
	int len; 
	printf("Array size :");
	scanf("%d",&len);
	int array1[len];
	for(int i = 0;i < len;i++){
		printf("Element %d :",i+1);
		scanf("%d",&array1[i]);
	}
	printf("Array elments are:");
	printarray(array1,len);
	
	
	
	return 0;
}


void printarray(int array[],int size){
	if(size > 0){
	printf("array element %d\n",array[0]);
	printarray(array+1,size-1);

}
	
}