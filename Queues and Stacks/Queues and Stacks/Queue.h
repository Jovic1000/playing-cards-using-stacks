#pragma once
#include "Node.h"
#include "Cards.h"
#include <iostream>

template<typename T>
class Queue
{
public:

	Node* GetHead();
	Node* GetTail();
	Cards Peek();
	void ShowContents();
	void SetHead(Node* node);
	void Push(Cards* card);
	void Pop();
	void Empty();
	void SetTail(Node* tail);



	Queue();

private:

	Node* m_tail;
	Node* m_head;

};

template<typename T>
inline Node* Queue<T>::GetHead()
{
	return m_head;
}

template<typename T>
inline Node* Queue<T>::GetTail()
{
	return m_tail;
}

template<typename T>
inline Cards Queue<T>::Peek()
{
	return GetHead()->GetValue();
}

template<typename T>
inline void Queue<T>::ShowContents()
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
inline void Queue<T>::SetHead(Node* node)
{
	m_head = node;
}

template<typename T>
inline void Queue<T>::Push(Cards* card)
{
	Node* newNode = new Node(*card);

	if (GetTail() == nullptr)
	{
		SetHead(newNode);
		SetTail(newNode);
		return;
	}
	else
	{
		Node* tempNode = GetTail();

		tempNode->SetNext(newNode);

		SetTail(newNode);

	}
}

template<typename T>
inline void Queue<T>::Pop()
{
	if (GetHead() != nullptr)
	{
		Node* currentHead = GetHead();
		SetHead(currentHead->GetNext());
		currentHead->SetNext(nullptr);
		delete currentHead;

		if (GetHead() == nullptr)
		{
			SetTail(nullptr);
		}
	}
	else
	{
		std::cout << "No stack to delete!" << std::endl;
	}
}

template<typename T>
inline void Queue<T>::Empty()
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
inline void Queue<T>::SetTail(Node* tail)
{
	m_tail = tail;
}

template<typename T>
inline Queue<T>::Queue() : m_head(nullptr), m_tail(nullptr)
{
}