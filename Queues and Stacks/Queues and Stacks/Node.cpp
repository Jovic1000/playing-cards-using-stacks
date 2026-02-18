#include "Node.h"

void Node::SetValue(Cards value)
{
	m_value = value;
}

Cards Node::GetValue()
{
	return m_value;
}

void Node::SetNext(Node* node)
{
	m_next = node;
}

Node* Node::GetNext()
{
	return m_next;
}

Node::Node(Cards value) : m_next(), m_value(value)
{
}