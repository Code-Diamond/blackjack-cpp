#include <iostream>
#include <string>
#include "Card.h"

using namespace std;

class Player
{
	public:
		Card *hand[20];
		string name;
		bool staying;
		int handTotal = 0;
		int cardTotal = 0;
		//Player();
		void setName(string inputName);
		void calculateHand();
		void addCard(Card *card);
		//~Player();
};
