
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define structures for books and users
// TODO: Change to array
struct Book {
    char title[100];
    char author[100];
    int year;
    int available;
};

struct User {
    char name[100];
    int id;
    int borrowedBooks;
};

// Global variables for book and user arrays
struct Book books[100];
struct User users[100];
int numBooks = 0, numUsers = 0;

// Function to display the main menu
void displayMainMenu() {
    printf("\nLibrary Management System\n");
    printf("1. Book Management\n");
    printf("2. User Management\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
}

// Function to manage books
void bookManagement() {
    int choice;

    while (1) {
        printf("\nBook Management\n");
        printf("1. Add Book\n");
        printf("2. View Books\n");
        printf("3. Search Book\n");
        printf("4. Return to Main Menu\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Add book functionality
                break;
            case 2:
                // View books functionality
                break;
            case 3:
                // Search book functionality
                break;
            case 4:
                return;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}

// Function to manage users
void userManagement() {
    int choice;

    while (1) {
        printf("\nUser Management\n");
        printf("1. Add User\n");
        printf("2. View Users\n");
        printf("3. Search User\n");
        printf("4. Return to Main Menu\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Add user functionality
                break;
            case 2:
                // View users functionality
                break;
            case 3:
                // Search user functionality
                break;
            case 4:
                return;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}

int main() {
    int choice;

    while (1) {
        displayMainMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                bookManagement();
                break;
            case 2:
                userManagement();
                break;
            case 3:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}