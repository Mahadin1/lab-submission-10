#include <stdio.h>

struct travelPackage {
    char packageName[50];
    char destination[50];
    int duration;
    double cost;
    int seatsAvailable;
};

int main() {
    struct travelPackage packages[3] = {
        {"Beach Paradise", "Hawaii", 7, 1500.0, 20},
        {"Mountain Adventure", "Nepal", 10, 2000.0, 15},
        {"City Tour", "Paris", 5, 1200.0, 25}
    };
    
    int choice;
    printf("1. Book a package\n2. Display available packages\n");
    scanf("%d", &choice);

    if (choice == 1) {
        int packageChoice;
        printf("Choose a package (1-3): ");
        scanf("%d", &packageChoice);
        if (packages[packageChoice-1].seatsAvailable > 0) {
            packages[packageChoice-1].seatsAvailable--;
            printf("Booking successful, Seats remaining: %d\n", packages[packageChoice-1].seatsAvailable);
        } else {
            printf("No seats available.\n");
        }
    } else if (choice == 2) {
        for (int i = 0; i < 3; i++) {
            printf("Package Name: %s\n", packages[i].packageName);
            printf("Destination: %s\n", packages[i].destination);
            printf("Duration: %d days\n", packages[i].duration);
            printf("Cost: %.2f\n", packages[i].cost);
            printf("Seats Available: %d\n", packages[i].seatsAvailable);
        }
    }
    return 0;
}
