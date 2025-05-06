 #include <stdio.h>

#define NUM_BRANDS 4

int main() {
    int inventory[NUM_BRANDS];  
    int brand_id, amount;

    
    printf("Enter the initial inventory for each brand:\n");
    printf("For Piels (ID 1), Coors (ID 2), Bud (ID 3), Iron City (ID 4)\n");

    
    for (int i = 0; i < NUM_BRANDS; i++) {
        printf("Enter the initial inventory for brand %d: ", i + 1);
        scanf("%d", &inventory[i]);
    }

    
    printf("\nEnter transactions (brand ID and amount). Enter 0 for brand ID to stop.\n");
    while (1) {
        printf("Enter brand ID (1-4) and amount (positive for purchase, negative for sale): ");
        scanf("%d %d", &brand_id, &amount);

        
        if (brand_id == 0) {
            break;
        }


        if (brand_id == 1) {  
            inventory[0] += amount;  
            if (inventory[0] < 0) {
                printf("Error: Inventory for Piels would go negative. Transaction cancelled.\n");
                inventory[0] -= amount;  
            }
        }
        else if (brand_id == 2) {  
            inventory[1] += amount;
            if (inventory[1] < 0) {
                printf("Error: Inventory for Coors would go negative. Transaction cancelled.\n");
                inventory[1] -= amount;
            }
        }
        else if (brand_id == 3) {  
            inventory[2] += amount;
            if (inventory[2] < 0) {
                printf("Error: Inventory for Bud would go negative. Transaction cancelled.\n");
                inventory[2] -= amount;
            }
        }
        else if (brand_id == 4) { 
            inventory[3] += amount;
            if (inventory[3] < 0) {
                printf("Error: Inventory for Iron City would go negative. Transaction cancelled.\n");
                inventory[3] -= amount;
            }
        }
        else {  
            printf("Invalid brand ID. Please enter a valid ID (1-4).\n");
        }
    }

    
    printf("\nFinal Inventory for each brand:\n");
    printf("Piels (ID 1): %d cases\n", inventory[0]);
    printf("Coors (ID 2): %d cases\n", inventory[1]);
    printf("Bud (ID 3): %d cases\n", inventory[2]);
    printf("Iron City (ID 4): %d cases\n", inventory[3]);

    return 0;
}
