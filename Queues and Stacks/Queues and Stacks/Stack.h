#pragma once
#include "Node.h"
#include "Cards.h"

template<typename T>
class Stack
{
public: 

	Node<T>* GetHead();
	Node<T>* Peek();
	void ShowContents();
	void SetHead(Node<T>* node);
	void Push(T* card);
	void Pop();
	void Empty();



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
inline Node<T>* Stack<T>::Peek()
{
	return GetHead();
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
			std::cout << tempNode->GetValue();
			std::cout << ", ";
		}
		else
		{
			std::cout << tempNode->GetValue();
			std::cout << std::endl;
			
		}

		tempNode = tempNode->GetNext();
	}
	std::cout << "----------------------------" << std::endl;
}

template<typename T>
inline void Stack<T>::SetHead(Node<T>* node)
{
	m_head = node;
}

template<typename T>
inline void Stack<T>::Push(T* card)
{
	Node<T>* newNode = new Node<T>(*card);

	if (GetHead() == nullptr)
	{
		SetHead(newNode);
		return;
	}
	else
	{
		Node<T>* tempNode = GetHead();

		newNode->SetNext(tempNode);

		SetHead(newNode);

	}
}

template<typename T>
inline void Stack<T>::Pop()
{
	if (GetHead() != nullptr)
	{
		Node<T>* currentHead = GetHead();
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
	Node<T>* tempNode = GetHead();
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