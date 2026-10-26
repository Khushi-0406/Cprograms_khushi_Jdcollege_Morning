#include <stdio.h>
#include <string.h>
#include <conio.h>

#define MAX_USERS 10

struct User {
    char username[20];
    char password[20];
    char mobile[10];
    char id[20];
};

struct User users[MAX_USERS];
int userCount = 0;

void getPassword(char *password) {
    char ch;
    int i = 0;
    while ((ch = getch()) != 13) {
        if (ch == 8 && i > 0) {
            printf("\b \b");
            i--;
        } else if (ch != 8) {
            printf("*");
            password[i++] = ch;
        }
    }
    password[i] = '\0';
    printf("\n");
}

void addUser() {
    if (userCount >= MAX_USERS) {
        printf("User limit reached!\n");
        return;
    }
    printf("Enter the id: ");
    scanf("%d", &users[userCount].id);
    printf("Enter username: ");
    scanf("%s", users[userCount].username);
    printf("Enter password: ");
    getPassword(users[userCount].password);
    printf("Enter mobile number: ");
    scanf("%s", users[userCount].mobile);
    
    
    userCount++;
    printf("User added successfully!\n");
}

void deleteUser() {
    char id[20];
    printf("Enter id: ");
    scanf("%d", id);
    
    for (int i = 0; i < userCount; i++) {
        if (strcmp(users[i].id, id) == 0) {
            for (int j = i; j < userCount - 1; j++) {
                users[j] = users[j + 1];
            }
            userCount--;
            printf("User deleted successfully!\n");
            return;
        }
    }
    printf("User not found!\n");
}

void updateUser() {
    char username[20];
    printf("Enter username to update: ");
    scanf("%s", username);
    
    for (int i = 0; i < userCount; i++) {
        if (strcmp(users[i].username, username) == 0) {
            printf("Enter new password: ");
            getPassword(users[i].password);
            printf("Password updated successfully!\n");
            printf("Update the mobile no.");
            scanf("%s", users[i].mobile);
            return;
        }
    }
    printf("User not found!\n");
}

void displayUsers() {
    if (userCount == 0) {
        printf("No users available!\n");
        return;
    }
    for (int i = 0; i < userCount; i++) {
        printf("Username: %s\n", users[i].username);
        printf("id: %d\n", users[i].id);
        printf("mobile: %d\n", users[i].mobile);
    }
}

int login() {
    char loginUser[20], loginPass[20];
    printf("Login\nEnter username: ");
    scanf("%s", loginUser);
    printf("Enter password: ");
    getPassword(loginPass);
    
    for (int i = 0; i < userCount; i++) {
        if (loginUser && loginPass ==0) {
            printf("Login successful!\n");
           return 1;
        }
    }
    printf("Invalid username or password!\n");
    return 0;
}

int main() {
    if (login()) {
        return 0;
    }
    
    int choice;
    while (1) {
        printf("\n1. Add User\n2. Delete User\n3. Update User\n4. Display Users\n5. Exit\nEnter choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
             addUser();
             break;
            case 2:
             deleteUser();
             break;
            case 3:
             updateUser();
             break;
            case 4:
             displayUsers();
             break;
            case 5:
             return 0;
            default: printf("Invalid choice!\n");
            
        }
    }
}