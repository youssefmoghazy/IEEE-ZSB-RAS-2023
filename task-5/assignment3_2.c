#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

void insert(Node **head, int data) {
    Node *new_node = (Node*)malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}

void delete(Node **head) {
    if (*head != NULL) {
        Node *temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}

void print(Node *head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    Node *head = NULL;
    char input;
    int data;

    while (1) {
        printf("Enter '+' to add a node, '-' to delete one, 'p' to print the list, or 'x' to exit: ");
        scanf(" %c", &input);

        switch (input) {
            case '+':
                printf("Enter the data to be added: ");
                scanf("%d", &data);
                insert(&head, data);
                break;
            case '-':
                delete(&head);
                break;
            case 'p':
                print(head);
                break;
            case 'x':
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Invalid input. Try again.\n");
                break;
        }
    }

    return 0;
}
