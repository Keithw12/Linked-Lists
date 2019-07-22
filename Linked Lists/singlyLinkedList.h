#pragma once
#include <iostream>


using namespace std;

class node
{
	public:
		int data;
		node* next;
};

class singlyLinkedList
{
public:
	void printList(node** head_ref);
	void push(node** head_ref, int new_data);
	void deleteList(node** head_ref);
};