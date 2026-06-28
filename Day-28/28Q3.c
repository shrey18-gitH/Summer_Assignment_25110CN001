#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Ticket {
    int ticketNo;
    char name[50];
    char event[50];
    int seats;
};

void bookTicket(struct Ticket tickets[], int *count) {
    printf("\nEnter Ticket Number: ");
    scanf("%d", &tickets[*count].ticketNo);
    printf("Enter Customer Name: ");
    scanf(" %[^\n]", tickets[*count].name);
    printf("Enter Event Name: ");
    scanf(" %[^\n]", tickets[*count].event);
    printf("Enter Number of Seats: ");
    scanf("%d", &tickets[*count].seats);
    (*count)++;
    printf("Ticket booked successfully!\n");
}

void cancelTicket(struct Ticket tickets[], int *count) {
    int ticketNo;
    printf("\nEnter Ticket Number to cancel: ");
    scanf("%d", &ticketNo);
    for (int i = 0; i < *count; i++) {
        if (tickets[i].ticketNo == ticketNo) {
            for (int j = i; j < *count - 1; j++) {
                tickets[j] = tickets[j + 1];
            }
            (*count)--;
            printf("Ticket cancelled successfully!\n");
            return;
        }
    }
    printf("No ticket found with Ticket Number %d.\n", ticketNo);
}

void viewTickets(struct Ticket tickets[], int count) {
    if (count == 0) {
        printf("\nNo tickets booked.\n");
        return;
    }
    printf("\n--- Ticket Bookings ---\n");
    for (int i = 0; i < count; i++) {
        printf("Ticket No: %d | Name: %s | Event: %s | Seats: %d\n",
               tickets[i].ticketNo, tickets[i].name, tickets[i].event, tickets[i].seats);
    }
}

int main() {
    struct Ticket tickets[100];
    int count = 0, choice;

    while (1) {
        printf("\n--- Ticket Booking System ---\n");
        printf("1. Book Ticket\n");
        printf("2. Cancel Ticket\n");
        printf("3. View All Tickets\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: bookTicket(tickets, &count); break;
            case 2: cancelTicket(tickets, &count); break;
            case 3: viewTickets(tickets, count); break;
            case 4: exit(0);
            default: printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
