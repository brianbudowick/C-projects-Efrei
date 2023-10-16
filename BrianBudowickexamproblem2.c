#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<stdbool.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// insert end
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

// serch and return
int search(struct Node* head, int key) {
    int position = 1;
    struct Node* current = head;
    while (current != NULL) {
        if (current->data == key) {
            return position;
        }
        current = current->next;
        position++;
    }
    return -1; // Element not found
}

// De;ete 
void delete(struct Node** head, int position) {
    if (*head == NULL) {
        return;
    }

    struct Node* current = *head;
    int currentPosition = 1;

    
    while (currentPosition < position && current != NULL) {
        current = current->next;
        currentPosition++;
    }

    if (current == NULL) {
        return; // Position out of range
    }

        if (current->prev != NULL) {
        current->prev->next = current->next;
    }
    if (current->next != NULL) {
        current->next->prev = current->prev;
    }

        if (currentPosition == 1) {
        *head = current->next;
    }

    free(current);
}

// Sort?  
void sort(struct Node** head) {
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

// DLL
void makeCircDLL(struct Node** head) {
    if (*head == NULL) {
        return;
    }

    struct Node* current = *head;

    while (current->next != NULL) {
        current = current->next;
    }
     current->next = *head;
    (*head)->prev = current;
}

// Print DLL
void printCirc(struct Node* head) {
    if (head == NULL) {
        return;
    }

    struct Node* current = head;

    do {
        printf("%d ", current->data);
        current = current->next;
    } while (current != head);
}

int main() {
    struct Node* head = NULL;
    int data, position, index;

        for (int i = 0; i < 5; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &data);
        insertEnd(&head, data);
    }

        printf("Enter the element to search for: ");
    scanf("%d", &index);
    position = search(head, index);
    if (position != -1) {
        printf("Element found at position %d\n", position);
    } else {
        printf("Element not found\n");
    }

    printf("Enter the position to delete: ");
    scanf("%d", &position);
    delete(&head, position);

    
    sort(&head);

    makeCircDLL(&head);

    
    printf("Circular DLL: ");
    printCirc(head);

    return 0;
}
