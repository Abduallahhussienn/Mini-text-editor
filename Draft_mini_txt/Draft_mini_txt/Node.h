#pragma once
template<class t>
class Node
{
public:

	Node<t>* next;
	t value;
	Node();
	Node(t line);
};


