#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PROPERTIES 100
#define MAX_CLIENTS 50

// Structure for Property
struct Property {
    int id;
    char type[30];       // House, Apartment, Land
    char location[50];
    float price;
    int available;       // 1 = available, 0 = sold
};

// Structure for Client
struct Client {
    int id;
    char name[50];
    char role[10];       // Buyer or Seller
};

struct Property properties[MAX_PROPERTIES];
struct Client clients[MAX_CLIENTS];
int property_count = 0, client_count = 0;

// Function prototypes
void addProperty();
void displayProperties();
void searchProperty();
void registerClient();
void buyProperty();

int main() {
    int choice;
    while (1) {
        printf("\n===== Real Estate Management System =====\n");
        printf("1. Display Properties\n");
        printf("2. Add Property\n");
        printf("3. Search Property\n");
        printf("4. Register Client\n");
        printf("5. Buy Property\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayProperties();
                break;
            case 2:
                addProperty();
                break;
            case 3:
                searchProperty();
                break;
            case 4:
                registerClient();
                break;
            case 5:
                buyProperty();
                break;
            case 6:
                printf("Thank you for using Real Estate Management System!\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}

// Function to add new property
void addProperty() {
    if (property_count >= MAX_PROPERTIES) {
        printf("Property list is full!\n");
        return;
    }

    struct Property p;
    p.id = property_count + 1;
    printf("Enter property type (House/Apartment/Land): ");
    scanf("%s", p.type);
    printf("Enter location: ");
    scanf("%s", p.location);
    printf("Enter price: ");
    scanf("%f", &p.price);
    p.available = 1;

    properties[property_count++] = p;
    printf("Property added successfully! ID: %d\n", p.id);
}

// Function to display properties
void displayProperties() {
    if (property_count == 0) {
        printf("No properties available!\n");
        return;
    }

    printf("\nAvailable Properties:\n");
    printf("ID\tType\t\tLocation\tPrice\t\tStatus\n");
    for (int i = 0; i < property_count; i++) {
        printf("%d\t%-10s\t%-10s\t%.2f\t%s\n",
               properties[i].id,
               properties[i].type,
               properties[i].location,
               properties[i].price,
               properties[i].available ? "Available" : "Sold");
    }
}

// Function to search property by location
void searchProperty() {
    char searchLoc[50];
    printf("Enter location to search: ");
    scanf("%s", searchLoc);

    int found = 0;
    for (int i = 0; i < property_count; i++) {
        if (strcmp(properties[i].location, searchLoc) == 0 && properties[i].available == 1) {
            printf("Property Found! ID: %d, Type: %s, Price: %.2f\n",
                   properties[i].id,
                   properties[i].type,
                   properties[i].price);
            found = 1;
        }
    }

    if (!found) {
        printf("No available property found in %s\n", searchLoc);
    }
}

// Function to register client
void registerClient() {
    if (client_count >= MAX_CLIENTS) {
        printf("Client list is full!\n");
        return;
    }

    struct Client c;
    c.id = client_count + 1;
    printf("Enter client name: ");
    scanf("%s", c.name);
    printf("Enter role (Buyer/Seller): ");
    scanf("%s", c.role);

    clients[client_count++] = c;
    printf("Client registered successfully! ID: %d\n", c.id);
}

// Function to buy property
void buyProperty() {
    int propID;
    printf("Enter Property ID to buy: ");
    scanf("%d", &propID);

    if (propID < 1 || propID > property_count) {
        printf("Invalid Property ID!\n");
        return;
    }

    if (properties[propID - 1].available == 0) {
        printf("Property already sold!\n");
        return;
    }

    properties[propID - 1].available = 0;
    printf("Property ID %d purchased successfully!\n", propID);
}
