#pragma once
#include "Node.h"
#include "Cards.h"
#include <iostream>

template<typename T>
class Stack
{
public: 

	Node* GetHead();
	Node* Peek();
	void ShowContents();
	void SetHead(Node* node);
	void Push(Cards* card);
	void Pop();
	void Empty();



	Stack();

private:


	Node* m_head;

};

template<typename T>
inline Node* Stack<T>::GetHead()
{
	return m_head;
}

template<typename T>
inline Node* Stack<T>::Peek()
{
	return m_head->GetValue();
}

template<typename T>
inline void Stack<T>::ShowContents()
{
	Node* tempNode = GetHead();

	std::cout << "----------CONTENTS----------" << std::endl;

	while (tempNode != nullptr)
	{
		
		if (tempNode->GetNext() != nullptr)
		{
			tempNode->GetValue().OutputCard();
			std::cout << ", ";
		}
		else
		{
			tempNode->GetValue().OutputCard();
			std::cout << std::endl;
		}

		tempNode = tempNode->GetNext();
	}

}

template<typename T>
inline void Stack<T>::SetHead(Node* node)
{
	m_head = node;
}

template<typename T>
inline void Stack<T>::Push(Cards* card)
{
	Node* newNode = new Node(*card);

	if (GetHead() == nullptr)
	{
		SetHead(newNode);
		return;
	}
	else
	{
		Node* tempNode = GetHead();

		newNode->SetNext(tempNode);

		SetHead(newNode);

	}
}

template<typename T>
inline void Stack<T>::Pop()
{
	if (GetHead() != nullptr)
	{
		Node* currentHead = GetHead();
		SetHead(currentHead->GetNext());
		currentHead->SetNext(nullptr);
		delete currentHead;
		
	}
	else
	{
		std::cout << "No stack to delete!" << std::endl;
	}
}

template<typename T>
inline void Stack<T>::Empty()
{
	Node* tempNode = GetHead();
	bool loop = true;

	while (loop)
	{
		if (tempNode != nullptr)
		{
			loop = true;
		}
		else
		{
			loop = false;
			return;
		}

		tempNode = tempNode->GetNext();

		Pop();
	}
}


template<typename T>
inline Stack<T>::Stack() : m_head(nullptr)
{
}