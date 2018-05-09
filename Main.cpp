#include <iostream>
#include <cstring>
#include <ctime>
#include "Card.h"

using namespace std;


int main()
{
	srand(time(0));
	
	string name;
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


	cout << deck[0]->getCardValue();

}