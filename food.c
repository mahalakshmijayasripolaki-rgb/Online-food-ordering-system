#include <stdio.h>

int main() {
    int choice, qty;
    float total = 0;

    printf("=====================================\n");
    printf("        ONLINE FOOD ORDER SYSTEM     \n");
    printf("=====================================\n");
    printf("Menu:\n");
    printf("1. Pizza       - Rs. 120\n");
    printf("2. Burger      - Rs.  80\n");
    printf("3. Fried Rice  - Rs. 100\n");
    printf("4. Coffee      - Rs.  40\n");
    printf("5. Exit & Generate Bill\n");
    
    while (1) {
        printf("\nEnter your choice (1-5): ");
        scanf("%d", &choice);

        if (choice == 5) {
            break;  // Exit loop to print bill
        }

        if (choice < 1 || choice > 5) {
            printf("Invalid choice! Please try again.\n");
            continue;
        }

        printf("Enter quantity: ");
        scanf("%d", &qty);

        switch (choice) {
            case 1: 
                total += 120 * qty;
                printf("Added %d Pizza(s).\n", qty);
                break;
            case 2:
                total += 80 * qty;
                printf("Added %d Burger(s).\n", qty);
                break;
            case 3:
                total += 100 * qty;
                printf("Added %d Fried Rice.\n", qty);
                break;
            case 4:
                total += 40 * qty;
                printf("Added %d Coffee.\n", qty);
                break;
        }
    }

    printf("\n=====================================\n");
    printf("              BILL RECEIPT           \n");
    printf("=====================================\n");
    printf("Total Amount: Rs. %.2f\n", total);
    printf("Thank you for ordering! Have a nice day!\n");
    printf("=====================================\n");

    return 0;
}