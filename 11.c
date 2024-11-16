#include <stdio.h>

struct flight {
    char flightNumber[10];
    char departureCity[50];
    char destinationCity[50];
    char date[20];
    int availableSeats;
};

int main() {
    struct flight flight1 = {"AI202", "New York", "London", "2024-12-15", 100};
    
    int choice;
    printf("1. Book a seat\n2. Display flight details\n");
    scanf("%d", &choice);

    if (choice == 1) {
        if (flight1.availableSeats > 0) {
            flight1.availableSeats--;
            printf("Seat booked successfully! Seats remaining: %d\n", flight1.availableSeats);
        } else {
            printf("No seats available.\n");
        }
    } else if (choice == 2) {
        printf("Flight Number: %s\n", flight1.flightNumber);
        printf("Departure City: %s\n", flight1.departureCity);
        printf("Destination City: %s\n", flight1.destinationCity);
        printf("Date: %s\n", flight1.date);
        printf("Available Seats: %d\n", flight1.availableSeats);
    }
    return 0;
}
