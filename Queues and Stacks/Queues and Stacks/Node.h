#pragma once
template<typename T>
class Node
{
public:

	void SetValue(T value);
	T GetValue();
	void SetNext(Node<T>* node);
	Node<T>* GetNext();

	Node(T value);

private:

	T m_value;
	Node<T>* m_next;
};

template<typename T>
inline void Node<T>::SetValue(T value)
{
	m_value = value;
}

template<typename T>
inline T Node<T>::GetValue()
{
	return m_value;
}

template<typename T>
inline void Node<T>::SetNext(Node<T>* node)
{
	m_next = node;
}

template<typename T>
inline Node<T>* Node<T>::GetNext()
{
	return m_next;
}

template<typename T>
inline Node<T>::Node(T value) : m_next(), m_value(value)
{
}
