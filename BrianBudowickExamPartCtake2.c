#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Employee structure
struct Employee {
    int empNumber;
    char name[50];
    int grade;
    struct Employee* next;
};

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to create a new employee record
struct Employee* createEmployee(int empNumber, const char* name, int grade) {
    struct Employee* emp = (struct Employee*)malloc(sizeof(struct Employee));
    emp->empNumber = empNumber;
    strcpy(emp->name, name);
    emp->grade = grade;
    emp->next = NULL;
    return emp;
}

// Function to insert an employee record at the end of the list
void insertEmployee(struct Employee** head, int empNumber, const char* name, int grade) {
    struct Employee* newEmp = createEmployee(empNumber, name, grade);
    if (*head == NULL) {
        *head = newEmp;
    } else {
        struct Employee* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newEmp;
    }
}

// Function to delete an employee record by Employee Number
void deleteEmployee(struct Employee** head, int empNumber) {
    struct Employee* current = *head;
    struct Employee* prev = NULL;

    while (current != NULL && current->empNumber != empNumber) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("Employee with Employee Number %d not found.\n", empNumber);
        return;
    }

    if (prev == NULL) {
        *head = current->next;
    } else {
        prev->next = current->next;
    }

    free(current);
}

// Function to display all employee records
void displayEmployees(struct Employee* head) {
    struct Employee* current = head;
    printf("Employee Records:\n");
    while (current != NULL) {
        printf("Employee Number: %d, Name: %s, Grade: %d\n", current->empNumber, current->name, current->grade);
        current = current->next;
    }
}

// Function to search for an employee by Employee Number
struct Employee* searchEmployee(struct Employee* head, int empNumber) {
    struct Employee* current = head;
    while (current != NULL) {
        if (current->empNumber == empNumber) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

// Function to merge two sorted lists
struct Employee* mergeLists(struct Employee* list1, struct Employee* list2) {
    struct Employee* merged = NULL;
    
    while (list1 != NULL && list2 != NULL) {
        if (list1->grade >= list2->grade) {
            insertEmployee(&merged, list1->empNumber, list1->name, list1->grade);
            list1 = list1->next;
        } else {
            insertEmployee(&merged, list2->empNumber, list2->name, list2->grade);
            list2 = list2->next;
        }
    }
    
    while (list1 != NULL) {
        insertEmployee(&merged, list1->empNumber, list1->name, list1->grade);
        list1 = list1->next;
    }
    
    while (list2 != NULL) {
        insertEmployee(&merged, list2->empNumber, list2->name, list2->grade);
        list2 = list2->next;
    }
    
    return merged;
}
struct Node* createNode(int data) {
            struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
            newNode->data = data;
            newNode->prev = NULL;
            newNode->next = NULL;
            return newNode;
}
void insertEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}  
// Sort list 
void sortList(struct Node** head) {
    struct Node* current = *head;
    struct Node* index = NULL;
    int temp;

    if (*head == NULL) {
        return;
    }

    while (current != NULL) {
        index = current->next;

        while (index != NULL) {
            if (current->data > index->data) {
                temp = current->data;
                current->data = index->data;
                index->data = temp;
            }
            index = index->next;
        }
        current = current->next;
    }
}


    

    
 


int main() {
    struct Employee* employeeList = NULL;
    struct Employee* employeeList2 = NULL;
    struct Node* head = NULL;
    int data, position, key;
    // Menu
    int choice;
    do {
        printf("\nEmployee Management System Menu:\n");
        printf("1. Insert Employee Department 1\n");
        printf("2. Insert Employees Department 2\n");
        printf("3. Delete Employee\n");
        printf("4. Display Employees\n");
        printf("5. Search Employee\n");
        printf("6. Merge Two Employee Lists\n");
        printf("7. Sort Employees by Grade (Descending)\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int empNumber, grade;
                char name[50];
                printf("Enter Employee Number: ");
                scanf("%d", &empNumber);
                printf("Enter Name: ");
                scanf("%s", name);
                printf("Enter Grade: ");
                scanf("%d", &grade);
                insertEmployee(&employeeList, empNumber, name, grade);
                break;
            }
            case 2: {
                 int empNumber, grade;
                char name[50];
                printf("Enter Employee Number: ");
                scanf("%d", &empNumber);
                printf("Enter Name: ");
                scanf("%s", name);
                printf("Enter Grade: ");
                scanf("%d", &grade);
                insertEmployee(&employeeList2, empNumber, name, grade);
                break;
               
            }
            case 3:{
                 int empNumber;
                printf("Enter Employee Number to delete: ");
                scanf("%d", &empNumber);
                deleteEmployee(&employeeList, empNumber);
                break;
            } 
            case 4: {
                displayEmployees(employeeList);
                displayEmployees(employeeList2);
                break;
            }
            case 5: {
                int empNumber;
                printf("Enter Employee Number to search: ");
                scanf("%d", &empNumber);
                struct Employee* emp = searchEmployee(employeeList, empNumber);
                struct Employee* emp2 = searchEmployee(employeeList2, empNumber);
                if (emp || emp2 != NULL) {
                    printf("Employee Found - Name: %s, Grade: %d\n", emp->name, emp->grade);

                } else {
                    printf("Employee not found.\n");
                }
                break;
            }
            
            case 6: { 
                employeeList = mergeLists(employeeList, employeeList2);
                break;
            }
               
            
            case 7:{
            // Sort the list 
            sortList(&head);
            
            }
            case 8: {
                // Exit the program
                break;
            }
            default: {
                printf("Invalid choice. Please enter a valid option.\n");
                break;
            }
        }  
    }
    while (choice != 7);

    // Free memory for employee records
    while (employeeList != NULL) {
        struct Employee* temp = employeeList;
        employeeList = employeeList->next;
        free(temp);
    }
    while (employeeList2 != NULL) {
        struct Employee* temp = employeeList2;
        employeeList2 = employeeList2->next;
        free(temp);
    }

    return 0;
}


