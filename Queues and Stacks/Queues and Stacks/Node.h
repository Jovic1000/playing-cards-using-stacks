#pragma once
#include "Cards.h"

class Node
{
public:

	void SetValue(Cards value);
	Cards GetValue();
	void SetNext(Node* node);
	Node* GetNext();

	Node(Cards value);

private:

	Cards m_value;
	Node* m_next;
};


