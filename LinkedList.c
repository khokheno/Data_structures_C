// Insert to start

#include <stdlib.h>
#include <stdio.h>

struct Node {
	int data;
	struct Node* next;
};

struct Node* head; // global var

struct Node* Insert(int x)
{
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = x;
	temp->next = head;
	head = temp;

	return head;

}

void Print()
{
	struct Node* temp = head;
	while (temp != NULL)
	{
		printf(" ->%d", temp->data);
		temp = temp->next;
	}
	printf("\n");

}
void Append(int x) {};
void reverse() {}
void InsertAtHead(int x) {};
void InsertAtPosition(int x,int position) {};
void DeleteAtPosition(int position) {};




int main() {
	head = NULL; // empty list
	Insert(3);
	Insert(2);
	Insert(1);
	Print();
}