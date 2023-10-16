#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
    
// Struct for data
struct Employee {
    int empNumber;
    char empName[50];
    int grade;
    struct Employee* next;
};

// Func create employee A
struct Employee* createEmployee(int empNumber, const char* empName, int grade) {
    struct Employee* newEmployee = (struct Employee*)malloc(sizeof(struct Employee));
    if (newEmployee == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newEmployee->empNumber = empNumber;
    strcpy(newEmployee->empName,empName);  
    newEmployee->grade= grade;
    newEmployee->next = NULL;
    return newEmployee;
}

//  Ins an employee at the end A
void insertEmployee(struct Employee** head, struct Employee* newEmployee) {
    if (*head == NULL) {
        *head = newEmployee;
    } else {
        struct Employee* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newEmployee;
    }
}

// del an employee A
void deleteEmployee(struct Employee** head, int empNumber) {
    struct Employee* current = *head;
    struct Employee* prev = NULL;

    while (current != NULL && current->empNumber != empNumber) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("Error\n");
        return;
    }

    if (prev == NULL) {
        *head = current->next;
    } else {
        prev->next = current->next;
    }

    free(current);
}

// Dsplay Emp A
void displayEmployees(struct Employee* head) {
    struct Employee* current = head;
    printf("Employee Records:\n");
    while (current != NULL) {
        printf("Employee Number: %d\n", current->empNumber);
        printf("Name: %s\n", current->empName);       
        printf("Grade: %d\n", current->grade);
        printf("\n");
        current = current->next;
    }
}

// search emp # A
void searchEmployee(struct Employee* head, int empNumber) {
    struct Employee* current = head;
    while (current != NULL) {
        if (current->empNumber == empNumber) {
            printf("Employee found:\n");
            printf("Employee Number: %d\n", current->empNumber);
            printf("Name: %s\n", current->empName);           
            printf("Grade: %d\n", current->grade);
            return;
        }
        current = current->next;
    }
    printf("Error\n");
}
// Func create employee B
struct Employee* createEmployeeB(int empNumber, const char* empName, int grade) {
    struct Employee* newEmployee = (struct Employee*)malloc(sizeof(struct Employee));
    if (newEmployee == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newEmployee->empNumber = empNumber;
    strcpy(newEmployee->empName,empName);  
    newEmployee->grade= grade;
    newEmployee->next = NULL;
    return newEmployee;
}

//  Ins an employee at the end B
void insertEmployeeB(struct Employee** head, struct Employee* newEmployee) {
    if (*head == NULL) {
        *head = newEmployee;
    } else {
        struct Employee* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newEmployee;
    }
}

// del an employee B
void deleteEmployeeB(struct Employee** head, int empNumber) {
    struct Employee* current = *head;
    struct Employee* prev = NULL;

    while (current != NULL && current->empNumber != empNumber) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("Error\n");
        return;
    }

    if (prev == NULL) {
        *head = current->next;
    } else {
        prev->next = current->next;
    }

    free(current);
}

// Dsplay Emp B
void displayEmployeesB(struct Employee* head) {
    struct Employee* current = head;
    printf("Employee Records:\n");
    while (current != NULL) {
        printf("Employee Number: %d\n", current->empNumber);
        printf("Name: %s\n", current->empName);       
        printf("Grade: %d\n", current->grade);
        printf("\n");
        current = current->next;
    }
}

// search emp # B
void searchEmployeeB(struct Employee* head, int empNumber) {
    struct Employee* current = head;
    while (current != NULL) {
        if (current->empNumber == empNumber) {
            printf("Employee found:\n");
            printf("Employee Number: %d\n", current->empNumber);
            printf("Name: %s\n", current->empName);           
            printf("Grade: %d\n", current->grade);
            return;
        }
        current = current->next;
    }
    printf("Error\n");
}
int main() {
    struct Employee* head = NULL;
    int choice;
    int empNumber;
    char empName[50];
    int grade;
     int empNumberB;
    char empNameB[50];
    int gradeB;
//combined company options 
    while (1) {
        printf("\nEmployee Tracking System A\n");
        printf("1. Add Emp A\n");
        printf("2. Delete Emp A\n");
        printf("3. Display All Emp A\n");
        printf("4. Search Emp # A\n");
        printf("5. Add Emp B\n");
        printf("6. Delete Emp B\n");
        printf("7. Display All Emp B\n");
        printf("8. Search Emp # B\n");
        printf("9. Exit \n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
    
    if (choice<=4);//create list for company A 
    { switch (choice) {
            case 1:
                printf("Enter Employee #: ");
                scanf("%d", &empNumber);
                printf("Enter Name: ");
                scanf("%s", empName);               
                printf("Enter Grade (1 to 5): ");
                scanf("%d", &grade);
                insertEmployee(&head, createEmployee(empNumber,empName,grade));
                break;
            case 2:
                printf("Enter Employee # to delete: ");
                scanf("%d", &empNumber);
                deleteEmployee(&head, empNumber);
                break;
            case 3:
                displayEmployees(head);
                break;
            case 4:
                printf("Employee # to search: ");
                scanf("%d", &empNumber);
                searchEmployee(head, empNumber);
                break;
            case 5:
                while (head != NULL) {
                    struct Employee* temp = head;
                    head = head->next;
                    free(temp);
                }
    
    if (choice>=5 && choice <9); //create list for company B 
    switch (choice) {
            case 1:
                printf("Enter Employee #: ");
                scanf("%d", &empNumberB);
                printf("Enter Name: ");
                scanf("%s", empNameB);               
                printf("Enter Grade (1 to 5): ");
                scanf("%d", &gradeB);
                insertEmployeeB(&head, createEmployeeB(empNumberB,empNameB,gradeB));
                break;
            case 2:
                printf("Enter Employee # to delete: ");
                scanf("%d", &empNumberB);
                deleteEmployee(&head, empNumberB);
                break;
            case 3:
                displayEmployees(head);
                break;
            case 4:
                printf("Employee # to search: ");
                scanf("%d", &empNumberB);
                searchEmployee(head, empNumberB);
                break;
            case 5:
                while (head != NULL) {
                    struct Employee* temp = head;
                    head = head->next;
                    free(temp);
                }
       
                  
            default:
                printf("Error,re-enter\n");
        }
        
    

    
return 0;
    }
    }
    }
    }