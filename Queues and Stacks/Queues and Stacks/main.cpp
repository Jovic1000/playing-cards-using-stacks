#include <iostream>
#include "Stack.h"
#include "Cards.h"


int main()
{
	// test stack
	{
		//const int ARRAY_SIZE = 5;

		////creates the stack
		//Stack<int>* intStack = new Stack<int>();

		////creates the nodes for the stack
		//
		//
		////adds to the stack
		//for (int i = 0; i < ARRAY_SIZE; i++)
		//{
		//	Node<int>* temp = new Node<int>(i + 1);
		//	intStack->Push(temp);
		//}

		//intStack->ShowContents();

		////removes from stack 2 times
		//// 1 2 3  
		//for (int i = 0; i < 2 ; i++)
		//{
		//	intStack->Pop();
		//}

		//intStack->ShowContents();


		//
	}



	Cards* card1 = new Cards(SPADE, 13);
	card1->OutputCard();

	Node<Cards>* newCard = new Node<Cards>(*card1);


	delete card1;
	return 0;
}