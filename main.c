#include <stdio.h>
#include <ctype.h>

void displayMenu() {
    printf("\n=== Arithmetic Calculator Menu ===\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit Program\n");
    printf("==================================\n");
    printf("Enter your choice (1-5): ");
}

int main() {
    int choice;
    char goBack;
    
    while (1) {
        displayMenu();
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("\nYou selected: Addition\n");
                break;
            case 2:
                printf("\nYou selected: Subtraction\n");
                break;
            case 3:
                printf("\nYou selected: Multiplication\n");
                break;
            case 4:
                printf("\nYou selected: Division\n");
                break;
            case 5:
                printf("\nExiting program. Goodbye!\n");
                return 0;
            default:
                printf("\nInvalid choice! Please select 1-5.\n");
                continue;
        }
        
        printf("\nDo you want to go back to the menu? (y/n): ");
        scanf(" %c", &goBack);
        
        if (tolower(goBack) == 'n') {
            printf("\nExiting program. Goodbye!\n");
            break;
        }
    }
    
    return 0;
}
