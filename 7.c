#include <stdio.h>

#define METTOKM 0.001

static int callcount = 0;
double converter(double meters) {
    callcount++;
    return meters * METTOKM;
}

int main() {
    int size;
    printf("Enter number of conversion: ");
	scanf("%d",&size);
	double meter[size];
	for(int i = 0;i < size;i++){
		printf("enter meters :");
		scanf("%lf",&meter[i]);
		meter[i] = converter(meter[i]);
	}
	printf("functions calls : %d\n",callcount);
	printf("In kilomter the values are:\n");
	for(int i = 0;i < size;i++){
		printf("%d kilometer : %.2f\n",i+1,meter[i]);

	}
    
    return 0;
}
