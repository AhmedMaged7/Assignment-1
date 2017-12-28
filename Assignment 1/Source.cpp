#include <iostream>
using namespace std;

struct node
{
	int value;
	node* next;
};
node * head = 0;

void reverse()
{
	node * prev = 0;
	node * temp = head;
	node * next;
	while (temp != 0)
	{
		next = temp->next;
		temp->next = prev;
		prev = temp;
		temp = next;
	}
	head = prev;
}



void print() {

	node *temp = head;

	while (temp != 0) {

		cout << temp->value << "  ";
		temp = temp->next;

	}
}

	void insert(){

		node * newnode = new node;

		cin >> newnode->value;
		newnode->next = 0;

		if (head == 0) head = newnode;
		else {
			node * temp = head;
			while (temp->next != NULL)
			{
				temp = temp->next;
			}
				temp->next = newnode;
			

		}
	}

	int main()
	{
		insert();
		insert();
		insert();
		cout << "Original" << endl;
		print();
		cout << endl;
		cout << "Reversed" << endl;
		reverse();
		print();
		
	}