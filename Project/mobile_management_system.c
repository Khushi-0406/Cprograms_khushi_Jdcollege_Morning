#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "mobiles.dat"

typedef struct {
    char model[50];
    char brand[30];
    float price;
} Mobile;

void addMobile();
void displayMobiles();
void searchMobile();

int main() {
    int choice;
    while (1) {
        printf("\n--- Mobile Management System ---\n");
        printf("1. Add Mobile\n");
        printf("2. Display Mobiles\n");
        printf("3. Search Mobile\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // To clear newline character

        switch (choice) {
            case 1:
                addMobile();
                break;
            case 2:
                displayMobiles();
                break;
            case 3:
                searchMobile();
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

void addMobile() {
    FILE *file = fopen(FILENAME, "ab");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    Mobile m;
    printf("Enter Mobile Brand: ");
    fgets(m.brand, sizeof(m.brand), stdin);
    m.brand[strcspn(m.brand, "\n")] = '\0';

    printf("Enter Mobile Model: ");
    fgets(m.model, sizeof(m.model), stdin);
    m.model[strcspn(m.model, "\n")] = '\0';

    printf("Enter Price: ");
    scanf("%f", &m.price);
    getchar(); // Clear newline

    fwrite(&m, sizeof(Mobile), 1, file);
    fclose(file);

    printf("Mobile added successfully!\n");
}

void displayMobiles() {
    FILE *file = fopen(FILENAME, "rb");
    if (file == NULL) {
        printf("No records found!\n");
        return;
    }

    Mobile m;
    printf("\n--- Mobile List ---\n");
    while (fread(&m, sizeof(Mobile), 1, file)) {
        printf("Brand: %s, Model: %s, Price: $%.2f\n", m.brand, m.model, m.price);
    }

    fclose(file);
}

void searchMobile() {
    FILE *file = fopen(FILENAME, "rb");
    if (file == NULL) {
        printf("No records found!\n");
        return;
    }

    char searchModel[50];
    printf("Enter model name to search: ");
    fgets(searchModel, sizeof(searchModel), stdin);
    searchModel[strcspn(searchModel, "\n")] = '\0';

    Mobile m;
    int found = 0;
    while (fread(&m, sizeof(Mobile), 1, file)) {
        if (strcmp(m.model, searchModel) == 0) {
            printf("Found! Brand: %s, Model: %s, Price: $%.2f\n", m.brand, m.model, m.price);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Mobile model not found!\n");
    }

    fclose(file);
}