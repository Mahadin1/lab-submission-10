#include<stdio.h>


 #define max 100
static int count = 0;

int countnum(double temp[],int size){
	if(size > 0){
	if(temp[0] > max){
		count++;
	}
	return countnum(temp+1,size-1);
	}
	return count;
}

int main(){
	int size;
	printf("Enter number of temperture :");
	scanf("%d",&size);
	double temperature[size];
    for(int i = 0 ; i< size ; i++){
    	printf("temperatue 1 : ");
    	scanf("%lf",&temperature[i]);
	}
	
	
	printf("temperature exceeded count : %d",countnum(temperature,size));
	
	
	
	return 0;
}