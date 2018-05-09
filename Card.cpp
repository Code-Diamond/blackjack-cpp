#include <iostream>
#include <string>
#include "Card.h"

		
Card::Card(int x, int y)
{
	switch (x)
	{
		case 1:
			switch (y)
			{
				case 1:
					value = "Ace";
					suit = "Spades";
					weight = 11;
					break;
				case 2:
					value = "Ace";
					suit = "Clubs";
					weight = 11;
					break;
				case 3:
					value = "Ace";
					suit = "Hearts";
					weight = 11;
					break;
				case 4:
					value = "Ace";
					suit = "Diamonds";
					weight = 11;
					break;
			}
			break;

		case 2:
			switch (y)
			{
				case 1:
					value = "2";
					suit = "Spades";
					weight = 2;
					break;
				case 2:
					value = "2";
					suit = "Clubs";
					weight = 2;
					break;
				case 3:
					value = "2";
					suit = "Hearts";
					weight = 2;
					break;
				case 4:
					value = "2";
					suit = "Diamonds";
					weight = 2;
					break;
			}
			break;

		case 3:
			switch (y)
			{
				case 1:
					value = "3";
					suit = "Spades";
					weight = 3;
					break;
				case 2:
					value = "3";
					suit = "Clubs";
					weight = 3;
					break;
				case 3:
					value = "3";
					suit = "Hearts";
					weight = 3;
					break;
				case 4:
					value = "3";
					suit = "Diamonds";
					weight = 3;
					break;
			}
			break;
		case 4:
			switch (y)
			{
				case 1:
					value = "4";
					suit = "Spades";
					weight = 4;
					break;
				case 2:
					value = "4";
					suit = "Clubs";
					weight = 4;
					break;
				case 3:
					value = "4";
					suit = "Hearts";
					weight = 4;
					break;
				case 4:
					value = "4";
					suit = "Diamonds";
					weight = 4;
					break;
			}
			break;
		case 5:
			switch (y)
			{
				case 1:
					value = "5";
					suit = "Spades";
					weight = 5;
					break;
				case 2:
					value = "5";
					suit = "Clubs";
					weight = 5;
					break;
				case 3:
					value = "5";
					suit = "Hearts";
					weight = 5;
					break;
				case 4:
					value = "5";
					suit = "Diamonds";
					weight = 5;
					break;
			}
			break;

		case 6:
			switch (y)
			{
				case 1:
					value = "6";
					suit = "Spades";
					weight = 6;
					break;
				case 2:
					value = "6";
					suit = "Clubs";
					weight = 6;
					break;
				case 3:
					value = "6";
					suit = "Hearts";
					weight = 6;
					break;
				case 4:
					value = "6";
					suit = "Diamonds";
					weight = 6;
					break;
			}
			break;

		case 7:
			switch (y)
			{
				case 1:
					value = "7";
					suit = "Spades";
					weight = 7;
					break;
				case 2:
					value = "7";
					suit = "Clubs";
					weight = 7;
					break;
				case 3:
					value = "7";
					suit = "Hearts";
					weight = 7;
					break;
				case 4:
					value = "7";
					suit = "Diamonds";
					weight = 7;
					break;
			}
			break;

		case 8:
			switch (y)
			{
				case 1:
					value = "8";
					suit = "Spades";
					weight = 8;
					break;
				case 2:
					value = "8";
					suit = "Clubs";
					weight = 8;
					break;
				case 3:
					value = "8";
					suit = "Hearts";
					weight = 8;
					break;
				case 4:
					value = "8";
					suit = "Diamonds";
					weight = 8;
					break;
			}
			break;

		case 9:
			switch (y)
			{
				case 1:
					value = "9";
					suit = "Spades";
					weight = 9;
					break;
				case 2:
					value = "9";
					suit = "Clubs";
					weight = 9;
					break;
				case 3:
					value = "9";
					suit = "Hearts";
					weight = 9;
					break;
				case 4:
					value = "9";
					suit = "Diamonds";
					weight = 9;
					break;
			}
			break;

		case 10:
			switch (y)
			{
				case 1:
					value = "10";
					suit = "Spades";
					weight = 10;
					break;
				case 2:
					value = "10";
					suit = "Clubs";
					weight = 10;
					break;
				case 3:
					value = "10";
					suit = "Hearts";
					weight = 10;
					break;
				case 4:
					value = "10";
					suit = "Diamonds";
					weight = 10;
					break;
			}
			break;

		case 11:
			switch (y)
			{
				case 1:
					value = "Jack";
					suit = "Spades";
					weight = 10;
					break;
				case 2:
					value = "Jack";
					suit = "Clubs";
					weight = 10;
					break;
				case 3:
					value = "Jack";
					suit = "Hearts";
					weight = 10;
					break;
				case 4:
					value = "Jack";
					suit = "Diamonds";
					weight = 10;
					break;
			}
			break;

		case 12:
			switch (y)
			{
				case 1:
					value = "Queen";
					suit = "Spades";
					weight = 10;
					break;
				case 2:
					value = "Queen";
					suit = "Spades";
					weight = 10;
					break;
				case 3:
					value = "Queen";
					suit = "Spades";
					weight = 10;
					break;
				case 4:
					value = "Queen";
					suit = "Spades";
					weight = 10;
					break;
			}
			break;

		case 13:
			switch (y)
			{
				case 1:
					value = "King";
					suit = "Spades";
					weight = 10;
					break;
				case 2:
					value = "King";
					suit = "Clubs";
					weight = 10;
					break;
				case 3:
					value = "King";
					suit = "Hearts";
					weight = 10;
					break;
				case 4:
					value = "King";
					suit = "Diamonds";
					weight = 10;
					break;
			}
			break;
	}
	is_used = false;
}

string Card::getCardValue()
{
	return value;
}

string Card::getCardSuit()
{
	return suit;
}

int Card::getCardWeight()
{
	return weight;
}

bool Card::getIsUsed()
{
	return is_used;
}

void Card::changeWeight()
{
	if(weight == 1)
	{
		weight = 11;
	}

	if(weight == 11)
	{
		weight = 1;
	}
}

void Card::setIsUsed()
{
	is_used = true;
}
