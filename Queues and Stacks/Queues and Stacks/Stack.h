#pragma once
#include "Node.h"
#include <iostream>

template<typename T>
class Stack
{
public: 

	Node<T>* GetHead();
	void ShowContents();
	void SetHead(Node<T>* node);
	void Push(Node<T>* node);
	void Pop();



	Stack();

private:


	Node<T>* m_head;

};

template<typename T>
inline Node<T>* Stack<T>::GetHead()
{
	return m_head;
}

template<typename T>
inline void Stack<T>::ShowContents()
{
	Node<T>* tempNode = GetHead();

	std::cout << "----------CONTENTS----------" << std::endl;

	while (tempNode != nullptr)
	{
		if (tempNode->GetNext() != nullptr)
		{
			std::cout << tempNode->GetValue() << ", ";
		}
		else
		{
			std::cout << tempNode->GetValue() << std::endl;;
		}

		tempNode = tempNode->GetNext();
	}

}

template<typename T>
inline void Stack<T>::SetHead(Node<T>* node)
{
	m_head = node;
}

template<typename T>
inline void Stack<T>::Push(Node<T>* node)
{
	if (GetHead() == nullptr)
	{
		SetHead(node);
		return;
	}
	else
	{
		Node<T>* tempNode = GetHead();

		node->SetNext(tempNode);

		SetHead(node);

	}


}

template<typename T>
inline void Stack<T>::Pop()
{
	Node<T>* currentHead = GetHead();
	SetHead(currentHead->GetNext());
	currentHead->SetNext(nullptr);
	delete currentHead;
}

template<typename T>
inline Stack<T>::Stack() : m_head(nullptr)
{
}