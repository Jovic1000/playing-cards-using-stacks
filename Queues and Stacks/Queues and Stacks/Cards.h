#pragma once

enum SUITS
{
	HEART,
	DIAMOND,
	SPADE,
	CLUB
};

class Cards
{
public:

	int GetNumber();
	SUITS GetSuit();
	void SetSuits(SUITS suits);
	void SetNumber(int num);
	void OutputCard();

	Cards(SUITS suit, int value);

private:

	SUITS m_currentSuit;
	int m_number;
};

