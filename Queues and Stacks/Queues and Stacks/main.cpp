#include <iostream>
#include "Stack.h"
#include "Queue.h"



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

	// stack 
	{
		Stack<Cards>* cardStack = new Stack<Cards>();

		Cards* card1 = new Cards(SPADE, 13);
		Cards* card2 = new Cards(SPADE, 12);
		Cards* card3 = new Cards(HEART, 2);
		Cards* card4 = new Cards(DIAMOND, 1);
		card1->OutputCard();

		std::cout << "Before pop" << std::endl;
		cardStack->Push(card1);
		cardStack->Push(card2);
		cardStack->ShowContents();
		std::cout << "After empty" << std::endl;
		cardStack->Empty();
		cardStack->ShowContents();

		cardStack->Push(card3);
		cardStack->Push(card4);
		cardStack->ShowContents();
		cardStack->Pop();
		cardStack->ShowContents();

		system("pause");
		delete cardStack;
	}

	//queue
	{
		Queue<Cards>* cardQueue = new Queue<Cards>();

		Cards* card1 = new Cards(SPADE, 13);
		Cards* card2 = new Cards(SPADE, 12);
		Cards* card3 = new Cards(HEART, 2);
		Cards* card4 = new Cards(DIAMOND, 1);
		card1->OutputCard();

		std::cout << "Before pop" << std::endl;
		cardQueue->Push(card1);
		cardQueue->Push(card2);
		cardQueue->ShowContents();

		std::cout << "After empty" << std::endl;
		cardQueue->Empty();
		cardQueue->ShowContents();

		cardQueue->Push(card3);
		cardQueue->Push(card4);
		cardQueue->ShowContents();
		cardQueue->Pop();
		cardQueue->ShowContents();


		system("pause");
		delete cardQueue;

	}

	return 0;
}