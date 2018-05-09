#include <iostream>
#include <string>

using namespace std;

class Card
{
	public:
		string suit;
		string value;
		int weight;
		bool is_used;	
		//Constructor, Methods, Destructor
		Card(int x, int y);
		string getCardValue();
		string getCardSuit();
		int getCardWeight();
		bool getIsUsed();
		void changeWeight();
		void setIsUsed();
		~Card();

};
