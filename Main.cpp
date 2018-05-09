#include <iostream>
#include <cstring>
#include <ctime>
#include "Player.h"
using namespace std;


int main()
{
	srand(time(0));
	
	string name;
	bool busted = false;
	//cout << "Please enter your name: ", cin >> name;
	


	Card *deck[52];
	int cardNumber = 0;
	for(int i = 1; i <= 13; i++)
	{
		for(int j = 1; j <= 4; j++)
		{
			
			deck[cardNumber] = new Card(i, j);
		}
		cardNumber++;
	}

	Player player;
	Player dealer;
	//set the player name

	//Game
	//Card copyOfCard = deck[0];
	// player.addCard(deck[1]);
	// player.calculateHand();
	// cout << player.handTotal;	

	// int x = rand() % 52;

	// player.addCard(deck[x]);
	// deck[x]->setIsUsed();

	// x = rand() % 52;
	// if(deck[x].isUsed == false)
	// {
	// 	player.addCard(deck[])	
	// }
	


	// while(!busted)
	// {
	// 	char decision;
	// 	cout << "Hit or stay? (h/s): ", cin >> decision;

	// 	if(decision == 'h')
	// 	{

	// 	}

	// }


}