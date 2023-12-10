#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

class LinkedList
{
	public:
		Node* first;    // Pointer to the first node in the linked list
		Node* last;     // Pointer to the last node in the linked list
		int length;      // Length of the linked list

		// Constructor
		LinkedList();

		// Destructor
		~LinkedList();
		// Check if the linked list is empty
		bool isEmpty();
		// Add a node to the linked list
		void add(Node*);
		// Display the elements of the linked list
		void display();
		// Get a node with a specific key from the linked list
		Product* get(string);
		// Get the node with the product with the highest price in the linked list
		Product* highPrice();
		// remove the product with a specific key
		bool remove(string);
		
};

#endif
