#include <iostream>
#include "LinkedList.h"
#include <string>
#include "assert.h"

using namespace std;

template<class t>
inline LinkedList<t>::LinkedList()
{
	head = tail = 0;
}

template<class t>
int LinkedList<t>::length()
{
	return count;
}

template<class t>
t LinkedList<t>::At(int ind)
{
	assert(ind >= 0 && ind < count);
	Node<t>* temp = head;
	for (int i = 0; i < ind; i++) {
		temp = temp->next;
	}
	return temp->value;
}

template<class t>
void LinkedList<t>::show()
{
	for (int i = 0; i < length(); i++)
	{
		cout << i + 1 << ") " << At(i) << "\n";
	}
}

template<class t>
void LinkedList<t>::InsertAt(int ind, t n)
{
	Node<t>* node = new Node<t>(n);
	Node<t>* temp = head;
	if (ind == 0)
	{
		node->next = head;
		head = node;
	}
	else
	{
		for (int i = 0; i < ind - 1; i++) {
			temp = temp->next;
		}
		node->next = temp->next;
		temp->next = node;
	}
	count++;
}

template<class t>
void LinkedList<t>::Add(t line)
{

	Node<t>* n = new Node<t>(line);
	if (count == 0)
	{
		head = tail = n;
	}
	else
	{
		tail->next = n;
		tail = n;
	}
	count++;
}

template<class t>
void LinkedList<t>::DeleteAt(int pos)
{
	assert(pos >= 0 && pos < count);
	Node<t>* tmp = head;
	if (pos == 0)
	{
		head = head->next;
		delete tmp;
	}
	else
	{
		for (int i = 0; i < pos - 1; i++)
			tmp = tmp->next;
		Node<t>* del = tmp->next;
		tmp->next = del->next;
		delete del;
		if (pos == count - 1)
			tail = tmp;
	}
	count--;
}

template<class t>
void LinkedList<t>::Update(int pos, t line)
{
	//Node<t>* node = new Node<t>(n);
	Node<t>* temp = head;
	if (pos == 0)
	{
		temp->value = line;
	}
	else
	{
		for (int i = 0; i < pos - 1; i++) {
			temp = temp->next;
		}
		temp->value = line;
	}
}

template<class t>
LinkedList<t>::~LinkedList()
{

}
