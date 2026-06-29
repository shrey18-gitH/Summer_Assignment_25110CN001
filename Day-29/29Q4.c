#include <stdio.h>
#include <string.h>

#define MAX 100

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Item inventory[MAX];
    int count = 0, choice, id, i, found;

    do {
        printf("\n--- Inventory Management System ---\n");
        printf("1. Add Item\n");
        printf("2. Display Inventory\n");
        printf("3. Search Item\n");
        printf("4. Update Item\n");
        printf("5. Delete Item\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Add Item
                if (count == MAX) {
                    printf("Inventory full! Cannot add more items.\n");
                } else {
                    printf("Enter Item ID: ");
                    scanf("%d", &inventory[count].id);
                    printf("Enter Item Name: ");
                    scanf("%s", inventory[count].name);
                    printf("Enter Quantity: ");
                    scanf("%d", &inventory[count].quantity);
                    printf("Enter Price: ");
                    scanf("%f", &inventory[count].price);
                    count++;
                    printf("Item added successfully.\n");
                }
                break;

            case 2: // Display Inventory
                if (count == 0) {
                    printf("Inventory is empty!\n");
                } else {
                    printf("\nID\tName\tQuantity\tPrice\n");
                    for (i = 0; i < count; i++) {
                        printf("%d\t%s\t%d\t\t%.2f\n", inventory[i].id, inventory[i].name,
                               inventory[i].quantity, inventory[i].price);
                    }
                }
                break;

            case 3: // Search Item
                printf("Enter Item ID to search: ");
                scanf("%d", &id);
                found = 0;
                for (i = 0; i < count; i++) {
                    if (inventory[i].id == id) {
                        printf("Item found: %d\t%s\t%d\t%.2f\n", inventory[i].id,
                               inventory[i].name, inventory[i].quantity, inventory[i].price);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Item not found.\n");
                }
                break;

            case 4: // Update Item
                printf("Enter Item ID to update: ");
                scanf("%d", &id);
                found = 0;
                for (i = 0; i < count; i++) {
                    if (inventory[i].id == id) {
                        printf("Enter new name: ");
                        scanf("%s", inventory[i].name);
                        printf("Enter new quantity: ");
                        scanf("%d", &inventory[i].quantity);
                        printf("Enter new price: ");
                        scanf("%f", &inventory[i].price);
                        printf("Item updated successfully.\n");
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Item not found.\n");
                }
                break;

            case 5: // Delete Item
                printf("Enter Item ID to delete: ");
                scanf("%d", &id);
                found = 0;
                for (i = 0; i < count; i++) {
                    if (inventory[i].id == id) {
                        for (int j = i; j < count - 1; j++) {
                            inventory[j] = inventory[j + 1];
                        }
                        count--;
                        printf("Item deleted successfully.\n");
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Item not found.\n");
                }
                break;

            case 6: // Exit
                printf("Exiting program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}
