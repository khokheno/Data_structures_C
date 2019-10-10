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
void Append(int x) {
	struct node* Append(int num) {
	struct node* tmp = (struct node*)malloc(sizeof(struct node));
	tmp->data = num;
	tmp->next = NULL;
	if (head == NULL) {
		head = tmp;
		tail = tmp;
	}
	else {
		tail->next = tmp;
		tail = tail->next;
	}

};
void reverse() {}
void InsertAtHead(int x) {
	struct node* InsertAtHead(int num) {
		struct node* tmp = (struct node*)malloc(sizeof(struct node));

		tmp->data = num;
		tmp->next = head;
		head = tmp;

		return head;

};
void InsertAtPosition(int x,int position) {
	struct node* InsertAtPosition(int num, int index) {
		int count = 0;
		struct node* pointer = head;
		struct node* tmp = (struct node*)malloc(sizeof(struct node));
		tmp->data = num;
		tmp->next = NULL;
		if (index == 0) {
			head = insertToHead(num);

		}
		else
		{
			while (count != (index - 1))
			{
				pointer = pointer->next;
				count++;

			}
			tmp->next = pointer->next;
			pointer->next = tmp;
		}
		head = pointer;
		return head;
};
void DeleteAtPosition(int position) {
	struct node* DeleteAtPosition(int index) {

		struct node* tmp = (struct node*)malloc(sizeof(struct node));
		struct node* after = (struct node*)malloc(sizeof(struct node));
		struct node* befor = (struct node*)malloc(sizeof(struct node));

		int i = index;
		tmp = head;


		while (tmp != NULL && i > 0)
		{
			after = tmp->next;
			if (i == 2 && tmp->next != NULL) {

				tmp->next = after->next;
				head = tmp;
				break;

			}

			tmp = tmp->next;

			i--;


		}
		return head;
};




int main() {
	head = NULL; // empty list
	Insert(3);
	Insert(2);
	Insert(1);
	Print();
}