#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node * next;
};

int main() {
	struct node *head, *newNode, *temp;
	int choice = 1;

	head = 0;

	while (choice == 1) {
		newNode = (struct node *) (malloc(sizeof(struct node)));

		printf("Enter data: ");
		scanf("%d", &newNode->data);

		if (head == 0) {
			head = temp = newNode;
		} else {
			temp-> next = newNode;
			temp = newNode;
		}

		printf("Do you want to add more items?(0/1) ");
		scanf("%d", &choice);
	}

	temp = head;

	while (temp != 0) {
		printf("%d ", temp -> data);
		temp = temp -> next;
	}
}