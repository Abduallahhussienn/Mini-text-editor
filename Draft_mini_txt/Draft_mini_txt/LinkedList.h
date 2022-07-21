#pragma once
#include "Node.h"
template <class t>
class LinkedList
{
	int count;
	Node<t>* head;
	Node<t>* tail;

public:
	LinkedList();
	int length();
	t At(int i);
	void show();
	void InsertAt(int i, t n);
	void Add(t line);
	void DeleteAt(int i);
	void Update(int pos, t line);
	~LinkedList();
};


