#include <stdio.h>
#include <stdlib.h>

int main() {
    int totalSeats = 50;      // total seats available
    int bookedSeats = 0;      // number of seats already booked
    int ticketPrice = 400;    // ticket price
    int choice, tickets, totalAmount;

    system("cls"); // clears screen (works on Windows; remove if using Linux/Mac)
    
    printf("====================================================\n");
    printf("            ?? CINEMA TICKET BOOKING SYSTEM          \n");
    printf("====================================================\n");

    do {
        printf("\n----------------- MAIN MENU -----------------\n");
        printf("1. View Available Seats\n");
        printf("2. Book Tickets\n");
        printf("3. Cancel Tickets\n");
        printf("4. Exit\n");
        printf("---------------------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nAvailable Seats: %d\n", totalSeats - bookedSeats);
                break;

            case 2:
                printf("\nEnter number of tickets to book: ");
                scanf("%d", &tickets);

                if (tickets <= 0) {
                    printf("Invalid number of tickets!\n");
                } 
                else if (bookedSeats + tickets > totalSeats) {
                    printf("Sorry, not enough seats available!\n");
                } 
                else {
                    bookedSeats += tickets;
                    totalAmount = tickets * ticketPrice;
                    printf("\nBooking successful! ?\n");
                    printf("Tickets Booked: %d\n", tickets);
                    printf("Price per ticket: Rs.%d\n", ticketPrice);
                    printf("Total Amount: Rs.%d\n", totalAmount);
                    printf("Remaining Seats: %d\n", totalSeats - bookedSeats);
                }
                break;

            case 3:
                printf("\nEnter number of tickets to cancel: ");
                scanf("%d", &tickets);

                if (tickets <= 0 || tickets > bookedSeats) {
                    printf("Invalid number of tickets to cancel!\n");
                } 
                else {
                    bookedSeats -= tickets;
                    printf("Successfully cancelled %d tickets. ?\n", tickets);
                    printf("Remaining Seats: %d\n", totalSeats - bookedSeats);
                }
                break;

            case 4:
                printf("\nThank you for using the Cinema Ticket Booking System! ??\n");
                printf("Have a great day!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}


