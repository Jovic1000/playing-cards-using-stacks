#pragma once
#include "Cards.h"

template<typename T>
class Node
{
public:

	void SetValue(T value);
	T GetValue();
	void SetNext(Node* node);
	Node* GetNext();

	Node(T value);

private:

	T m_value;
	Node* m_next;
};

template<typename T>
void Node<T>::SetValue(T value)
{
	m_value = value;
}

template<typename T>
T Node<T>::GetValue()
{
	return m_value;
}

template<typename T>
void Node<T>::SetNext(Node* node)
{
	m_next = node;
}

template<typename T>
Node<T>* Node<T>::GetNext()
{
	return m_next;
}

template<typename T>
Node<T>::Node(T value) : m_next(), m_value(value)
{
}