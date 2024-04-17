#include <stdio.h>
#include <stdlib.h>
struct Node {
	int data;
	struct Node* next;
};
void insertAtBeginning(struct Node** head, int data)
{
	struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = *head;
	*head = newNode;
}
void insertAtEnd(struct Node** head, int data)
{
	struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = NULL;
	if (*head == NULL) {
		*head = newNode;
		return;
    }
	struct Node* current = *head;
	while (current->next != NULL) {
		current = current->next;
	}
	current->next = newNode;
}
void printList(struct Node* head)
{
	struct Node* current = head;
	while (current != NULL) {
		printf("%d -> ", current->data);
		current = current->next;
	}
	printf("NULL\n");
}

int main()
{
	struct Node* head = NULL;
	insertAtBeginning(&head, 10);
	insertAtEnd(&head, 20);
	insertAtEnd(&head, 30);
	insertAtEnd(&head, 40);
	insertAtEnd(&head, 50);
	printf("Linked List: ");
	printList(head);

	return 0;
}
