#include "Node.h"
template<class t>
Node<t>::Node()
{
	value = 0;
	next = 0;
}
template<class t>
inline Node<t>::Node(t line)
{
	value = line;
	next = 0;
}
#include "Node.h"
