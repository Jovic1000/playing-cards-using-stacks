#include "Cards.h"
#include <iostream>

int Cards::GetNumber()
{
    return m_number;
}

SUITS Cards::GetSuit()
{
    return m_currentSuit;
}

void Cards::SetSuits(SUITS suits)
{
    m_currentSuit = suits;
}

void Cards::SetNumber(int num)
{
    if (num > 13)
    {
        num = 13;
    }

    if (num < 1)
    {
        num = 1;
    }

    m_number = num;
}

void Cards::OutputCard()
{
    std::string tempName = "";
    std::string tempSuit = "";
    

    switch (GetNumber())
    {
    case(1):
        tempName = "Ace";
        break;
    case(13):
        tempName = "King";
        break;
    case(12):
        tempName = "Queen";
        break;
    case(11):
        tempName = "Jack";
        break;
    default:
        break;
    }

    switch (GetSuit())
    {
    case(0):
        tempSuit = "Hearts";
        break;
    case(1):
        tempSuit = "Diamons";
        break;
    case(2):
        tempSuit = "Spades";
        break;
    case(3):
        tempSuit = "Clubs";
        break;
    default:
        break;
    }



    if(tempName != "")
    {
        std::cout << tempName << " of " << tempSuit << std::endl;
    }
    else if (tempName == "")
    {
        std::cout << GetNumber() << " of " << tempSuit << std::endl;
    }
    else
    {
        std::cout << "!!!CARD ERROR!!!" << std::endl;
    }
}

Cards::Cards(SUITS suit, int value) : m_number(value), m_currentSuit(suit)
{
}


std::ostream& operator<<(std::ostream& os, const Cards& cards)
{
    std::string tempName = "";
    std::string tempSuit = "";


    switch (cards.m_number)
    {
    case(1):
        tempName = "Ace";
        break;
    case(13):
        tempName = "King";
        break;
    case(12):
        tempName = "Queen";
        break;
    case(11):
        tempName = "Jack";
        break;
    default:
        break;
    }

    switch (cards.m_currentSuit)
    {
    case(0):
        tempSuit = "Hearts";
        break;
    case(1):
        tempSuit = "Diamons";
        break;
    case(2):
        tempSuit = "Spades";
        break;
    case(3):
        tempSuit = "Clubs";
        break;
    default:
        break;
    }



    if (tempName != "")
    {
        std::cout << tempName << " of " << tempSuit << std::endl;
    }
    else if (tempName == "")
    {
        std::cout << cards.m_number << " of " << tempSuit << std::endl;
    }
    else
    {
        std::cout << "!!!CARD ERROR!!!" << std::endl;
    }

    return os;
}