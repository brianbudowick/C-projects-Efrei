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

// Func create employee 
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

//  Ins an employee at the end
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

// del an employee 
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

// Dsplay Emp
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

// search emp #
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

int main() {
    struct Employee* head = NULL;
    int choice;
    int empNumber;
    char empName[50];
    int grade;

    while (1) {
        printf("\nEmployee Tracking System\n");
        printf("1. Add Emp\n");
        printf("2. Delete Emp\n");
        printf("3. Display All Emp\n");
        printf("4. Search Emp #\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
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
                return 0;
            default:
                printf("Error,re-enter\n");
        }
    }

    return 0;
}


/*
// Implementation of a Singly Linked List
struct node {
    int data;
    struct node *link;
};

void add_at_end(struct node *head, int data);
struct node* add_beg(struct node* head, int d);
void add_beg2(struct node** head, int d);
struct node* del_first(struct node* head);
struct node* del_last(struct node* head);
struct node* del_last2(struct node* head);
void add_at_pos(struct node* head, int data, int pos);
void del_pos(struct node **head, int position);
struct node* del_list(struct node* head);
struct node* reverse(struct node* head);
void count_of_nodes(struct node *head);
void print_data(struct node *head);

int main(){
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;

    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;

    head->link->link = current;

    count_of_nodes(head);
    print_data(head);
    add_beg2(&head, 777);
    count_of_nodes(head);
    print_data(head);
    add_at_end(head, 555);
    count_of_nodes(head);
    print_data(head);
    /*
    add_beg2(&head, 894);
    count_of_nodes(head);
    print_data(head);
    add_at_end(head, 6733);
    count_of_nodes(head);
    print_data(head);
    */



/*
void count_of_nodes(struct node *head)
{
    int count = 0;
    if (head == NULL)
        printf("Linked list is empty");
    else 
    {
        struct node *ptr = NULL;
        ptr = head;
        while(ptr != NULL){
            count++;
            ptr = ptr->link;
        }
        printf("Number of nodes = %d\n", count);
    }
}

void print_data(struct node *head)
{
    if (head == NULL)
        printf("Linked list is empty");
    else
    {
        printf("The data stored in the list:\n");
        struct node *ptr = NULL;
        ptr = head;
        while(ptr != NULL){
            printf("%d ", ptr->data);
            ptr = ptr->link;
        }
        printf("\n");
    }
}

void add_at_end(struct node *head, int data)
{
    struct node *ptr, *temp;
    ptr = head;
    
    temp = (struct node*) malloc(sizeof(struct node));
    temp->data = data; 
    temp->link = NULL;

    while(ptr->link != NULL){
        ptr = ptr->link;
    }

    ptr->link = temp;
}

struct node* add_beg(struct node* head, int d)
{
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = d;
    ptr->link = NULL;

    ptr->link = head;
    head = ptr;
    return head; 
}

void add_beg2(struct node** head, int d)
{
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = d;
    ptr->link = NULL;

    ptr->link = *head;
    *head = ptr;
}

struct node* del_last(struct node* head)
{
    if (head == NULL)
        printf("List is already empty!");
    else if (head->link == NULL)
        {
            free(head);
            head = NULL;
        }
    else
    {
        struct node *temp = head;
        struct node *ptr = head;
        while(ptr->link != NULL)
        {
            temp = ptr;
            ptr = ptr->link;
        }
        temp->link = NULL;
        free(ptr);
        ptr = NULL;
    }
    return head;
}

struct node* del_last2(struct node* head)
{
    if (head == NULL)
        printf("List is already empty!");
    else if (head->link == NULL)
        {
            free(head);
            head = NULL;
        }
    else
    {
        struct node *temp = head;
        while(temp->link->link != NULL)
        {
            temp = temp->link;
        }
        free(temp->link);
        temp->link = NULL;
    }
    return head;
}

struct node* del_first(struct node* head)
{
    if (head == NULL)
        printf("List is already empty!");
        else 
        {
            struct node* temp = head;
            head = head->link;
            free(temp);
            temp = NULL;
        }
        return head;
}


void add_at_pos(struct node* head, int data, int pos)
{
    struct node* ptr1 = head;
    struct node* ptr2 = malloc(sizeof(struct node));
    ptr2->data = data;
    ptr2->link = NULL;

    pos--;
    while(pos != 1)
    {
        ptr1 = ptr1->link;
        pos--;
    }
    ptr2->link = ptr1->link;
    ptr1->link = ptr2;
}

void del_pos(struct node **head, int position)
{
    struct node* current = *head;
    struct node* previous = *head;

    if(*head == NULL)
    {
        printf("List is empty!");
        return;
    }
    if(position == 1)
    {
        *head = current->link;
        free(current);
        current = NULL;
    }
    else
    {
        while(position != 1)
            {
                previous = current;
                current = current->link;
                position--;
            }
        previous->link = current->link;
        free(current);
        current = NULL;
    }
}

struct node* del_list(struct node* head)
{
    struct node* temp = head;
    while(temp != NULL)
    {
        temp = temp->link;
        free(head);
        head = temp;
    }
    return head;
}

struct node* reverse(struct node* head)
{
    struct node* prev = NULL;
    struct node* next = NULL;
    while(head != NULL)
    {
        next = head->link;
        head->link = prev;
        prev = head;
        head = next;
    }
    head = prev;
    return head;
    */
