#include "Stack.h"

template<typename T>
class Queue
{
public:

	Node<T>* GetHead();
	Node<T>* GetTail();
	T Peek();
	void ShowContents();
	void SetHead(Node<T>* node);
	void Push(T* card);
	void Pop();
	void Empty();
	void SetTail(Node<T>* tail);



	Queue();

private:

	Node<T>* m_tail;
	Node<T>* m_head;

};

template<typename T>
inline Node<T>* Queue<T>::GetHead()
{
	return m_head;
}

template<typename T>
inline Node<T>* Queue<T>::GetTail()
{
	return m_tail;
}

template<typename T>
inline T Queue<T>::Peek()
{
	return GetHead()->GetValue();
}

template<typename T>
inline void Queue<T>::ShowContents()
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

}

template<typename T>
inline void Queue<T>::SetHead(Node<T>* node)
{
	m_head = node;
}

template<typename T>
inline void Queue<T>::Push(T* card)
{
	Node<T>* newNode = new Node<T>(*card);

	if (GetTail() == nullptr)
	{
		SetHead(newNode);
		SetTail(newNode);
		return;
	}
	else
	{
		Node<T>* tempNode = GetTail();

		tempNode->SetNext(newNode);

		SetTail(newNode);

	}
}

template<typename T>
inline void Queue<T>::Pop()
{
	if (GetHead() != nullptr)
	{
		Node<T>* currentHead = GetHead();
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
inline void Queue<T>::SetTail(Node<T>* tail)
{
	m_tail = tail;
}

template<typename T>
inline Queue<T>::Queue() : m_head(), m_tail()
{
};
