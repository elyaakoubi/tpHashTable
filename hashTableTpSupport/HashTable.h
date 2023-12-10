#ifndef HASHTABLE_H
#define HASHTABLE_H

#include "LinkedList.h"

class HashTable
{
	private:
		int length;           // Number of buckets in the hash table
		LinkedList** th;      // Array of pointers to linked lists (buckets)
		unsigned int hash(string); // Hash function to compute the index

	public:
		// Constructor
		HashTable(int);
		// Destructor
		~HashTable();
		// Insert a key-value pair into the hash table
		int put(string, Product*);
		// Get the linked list at a specific index in the hash table
		LinkedList* getList(int);
		// Display the contents of the hash table
		void display();
		// Get the value associated with a given key
		Product* get(string);
		// Remove a key-value pair from the hash table
		bool remove(string);
		// Get the product with the highest price in the hash table
		Product* highPrice();
};

#endif

