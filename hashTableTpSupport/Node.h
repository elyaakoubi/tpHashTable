#ifndef NODE_H
#define NODE_H
#include "Product.h"

struct Node{
	string key;
	Product* entity;
	Node* next;
	Node* previous;
	
	Node(string,Product*);
	~Node();
	
};

#endif
