#include<stdio.h>
#include<string.h>

struct dealership {
	char make[50];
	char model[50];
	int year;
	double price;
	double mileage;
};

void display(struct dealership car) {
	printf("Car Details:\n");
	printf("Make: %s\n", car.make);
	printf("Model: %s\n", car.model);
	printf("Year: %d\n", car.year);
	printf("Price: %.2f\n", car.price);
	printf("Mileage: %.2f\n", car.mileage);
}

//void addcar(struct dealership *car, int n){
//	printf("enter details\n");
//	printf("Make: ");
//	scanf("%s",&car[n].make);
//	printf("Model: ");
//	scanf("%s",&car[n].model);
//	printf("Year: ");
//	scanf("%d",&car[n].year);
//	printf("Price: ");
//	scanf("%lf",&car[n].price);
//	printf("Mileage: ");
//	scanf("%lf",&car[n].mileage);
//
//
//}

int main() {
	struct dealership car[10] = {
		{"toyota", "corolla", 2020, 2000000.50, 15.0},  // 1st car
		{"honda", "civic", 2019, 2200000.75, 12.0},    // 2nd car
		{"ford", "fusion", 2018, 1800000.25, 22.0},    // 3rd car
		{"chevrolet", "malibu", 2021, 2500000.40, 10.0}, // 4th car
		{"nissan", "altima", 2020, 2100000.60, 13.0},  // 5th car
	};
	int filledcar = 5;
	printf("1.buyer\n2.seller\n");
	int num = 0;
	scanf("%d",&num);
	if(num == 1) {

		printf("1.Search\n2.Display car list\n");
		scanf("%d",&num);
		if(num == 1) {
			printf("1.Make\n2.Model\n");
			scanf("%d",&num);
			if(num ==1) {
				char make[50];
				printf("enter make :\n");
				scanf("%s",make);
				for(int i = 0; i < filledcar; i++) {
					if(strstr(make,car[i].make)) display(car[i]);
				}
			} else if(num ==2) {
				char model[50];
				printf("enter model :\n");
				scanf("%s",model);
				for(int i = 0; i < filledcar; i++) {
					if(strstr(model,car[i].model)) display(car[i]);
				}
			}
		} else if(num == 2) {
			for(int i =0 ; i < filledcar; i++) {
				display(car[i]);
				printf("\n");
			}
		}

	} else if( num == 2) {
		printf("1.add car\n2.Display car list\n");
		scanf("%d",&num);
		if(num == 1) {
			int n = filledcar;
			printf("enter details\n");
			printf("Make: ");
			scanf("%s",car[n].make);
			printf("Model: ");
			scanf("%s",car[n].model);
			printf("Year: ");
			scanf("%d",&car[n].year);
			printf("Price: ");
			scanf("%lf",&car[n].price);
			printf("Mileage: ");
			scanf("%lf",&car[n].mileage);
			filledcar++;
			printf("Do you want display cars:\n1.yes\n2.no(END CODE)");
			scanf("%d",&num);
			if(num == 1) {
				for(int i =0 ; i < filledcar; i++) {
					display(car[i]);
					printf("\n");
				}
			} else {
				return 0;
			}
		} else if(num == 2) {
			for(int i =0 ; i < filledcar; i++) {
				display(car[i]);
				printf("\n");
			}
		}

	}

	return 0;
}
