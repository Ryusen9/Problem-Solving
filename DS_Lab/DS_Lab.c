#include <stdio.h>
#include <string.h>
#define MAX 100
struct Contact {
    char name[100];
    char number[20];
};
struct Contact phoneBook[MAX];
int totalContacts = 0;
void toLowerCase(char str[]) {
    for (int i = 0; str[i]; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');
        }
    }
}
void sortContacts() {
    int i, j;
    struct Contact temp;
    for (i = 0; i < totalContacts - 1; i++) {
        for (j = i + 1; j < totalContacts; j++) {
            char name1[100], name2[100];
            strcpy(name1, phoneBook[i].name);
            strcpy(name2, phoneBook[j].name);
            toLowerCase(name1);
            toLowerCase(name2);
            if (strcmp(name1, name2) > 0) {
                temp = phoneBook[i];
                phoneBook[i] = phoneBook[j];
                phoneBook[j] = temp;
            }
        }
    }
}
void addContact() {
    if (totalContacts >= MAX) {
        printf("Phone book is full.\n");
        return;
    }
    printf("Enter name: ");
    scanf(" %[^\n]", phoneBook[totalContacts].name);
    printf("Enter number: ");
    scanf(" %[^\n]", phoneBook[totalContacts].number);
    totalContacts++;
    sortContacts();
    printf("Contact added successfully.\n");
}
void deleteContact() {
    char delName[100];
    int found = 0;
    printf("Enter name to delete: ");
    scanf(" %[^\n]", delName);
    for (int i = 0; i < totalContacts; i++) {
        if (strcmp(phoneBook[i].name, delName) == 0) {
            found = 1;
            for (int j = i; j < totalContacts - 1; j++) {
                phoneBook[j] = phoneBook[j + 1];
            }
            totalContacts--;
            printf("Contact deleted.\n");
            break;
        }
    }
    if (!found) {
        printf("Contact not found.\n");
    }
}
void searchByName() {
    char searchName[100];
    int found = 0;
    printf("Enter name to search: ");
    scanf(" %[^\n]", searchName);
    for (int i = 0; i < totalContacts; i++) {
        if (strcmp(phoneBook[i].name, searchName) == 0) {
            printf("Name: %s\n", phoneBook[i].name);
            printf("Number: %s\n", phoneBook[i].number);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Contact not found.\n");
    }
}
void searchByNumber() {
    char searchNumber[20];
    int found = 0;
    printf("Enter number to search: ");
    scanf(" %[^\n]", searchNumber);
    for (int i = 0; i < totalContacts; i++) {
        if (strcmp(phoneBook[i].number, searchNumber) == 0) {
            printf("Name: %s\n", phoneBook[i].name);
            printf("Number: %s\n", phoneBook[i].number);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Contact not found.\n");
    }
}
void displayContacts() {
    if (totalContacts == 0) {
        printf("No contacts in phone book.\n");
    } else {
        for (int i = 0; i < totalContacts; i++) {
            printf("%d. Name: %s, Number: %s\n", i + 1, phoneBook[i].name, phoneBook[i].number);
        }
    }
}
int main() {
    int choice;
    while (1) {
        printf("\nPhone Book Menu:\n");
        printf("1. Add Contact\n");
        printf("2. Delete Contact by Name\n");
        printf("3. Search Contact by Name\n");
        printf("4. Search Contact by Number\n");
        printf("5. Display All Contacts\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            addContact();
        } else if (choice == 2) {
            deleteContact();
        } else if (choice == 3) {
            searchByName();
        } else if (choice == 4) {
            searchByNumber();
        } else if (choice == 5) {
            displayContacts();
        } else if (choice == 6) {
            printf("Exiting phone book.\n");
            break;
        } else {
            printf("Invalid choice.\n");
        }
    }
    return 0;
}