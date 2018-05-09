#include <iostream>
#include <string>
#include "Player.h"
using namespace std;


void Player::setName(string inputName)
{
	name = inputName;
}

void Player::calculateHand()
{
	for(int i = 0; i < cardTotal; i++)
	{
		handTotal += hand[i]->getCardWeight();
	}
}

void Player::addCard(Card *card)
{
	hand[cardTotal] = card;
	cardTotal++;
}

