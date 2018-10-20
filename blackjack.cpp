#include <iostream>
#include <cstring>
#include <random>
using namespace std;

int hand[52];
int dealer[52];
int i = 0;	
int j = 0;
int total = 0;
int dealerTotal = 0;
int drawCard(){
    random_device rd;
    uniform_int_distribution<long> dist(1,52); 	
	return dist(rd);	
}
string getCardDetails(int x){
		switch(x){case 1: return "Ace of Spades"; case 2: return "Ace of Diamonds"; case 3: return "Ace of Clubs"; case 4: return "Ace of Hearts"; case 5: return "2 of Spades"; case 6: return "2 of Diamonds"; case 7: return "2 of Clubs"; case 8: return "2 of Hearts"; case 9: return "3 of Spades"; case 10: return "3 of Diamonds"; case 11: return "3 of Clubs"; case 12: return "3 of Hearts"; case 13: return "4 of Spades"; case 14: return "4 of Diamonds"; case 15: return "4 of Clubs"; case 16: return "4 of Hearts"; case 17: return "5 of Spades"; case 18: return "5 of Diamonds"; case 19: return "5 of Clubs"; case 20: return "5 of Hearts"; case 21: return "6 of Spades"; case 22: return "6 of Diamonds"; case 23: return "6 of Clubs"; case 24: return "6 of Hearts"; case 25: return "7 of Spades"; case 26: return "7 of Diamonds"; case 27: return "7 of Clubs"; case 28: return "7 of Hearts"; case 29: return "8 of Spades"; case 30: return "8 of Diamonds"; case 31: return "8 of Clubs"; case 32: return "8 of Hearts"; case 33: return "9 of Spades"; case 34: return "9 of Diamonds"; case 35: return "9 of Clubs"; case 36: return "9 of Hearts"; case 37: return "10 of Spades"; case 38: return "10 of Diamonds"; case 39: return "10 of Clubs"; case 40: return "10 of Hearts"; case 41: return "Jack of Spades"; case 42: return "Jack of Diamonds"; case 43: return "Jack of Clubs"; case 44: return "Jack of Hearts"; case 45: return "Queen of Spades"; case 46: return "Queen of Diamonds"; case 47: return "Queen of Clubs"; case 48: return "Queen of Hearts"; case 49: return "King of Spades"; case 50: return "King of Diamonds"; case 51: return "King of Clubs"; case 52: return "King of Hearts"; default: return ""; }
}
int getCardWeight(int x){
	switch(x){
		case 1: return 11; case 2: return 11; case 3: return 11; case 4: return 11; case 5: return 2; case 6: return 2; case 7: return 2; case 8: return 2; case 9: return 3; case 10: return 3; case 11: return 3; case 12: return 3; case 13: return 4; case 14: return 4; case 15: return 4; case 16: return 4; case 17: return 5; case 18: return 5; case 19: return 5; case 20: return 5; case 21: return 6; case 22: return 6; case 23: return 6; case 24: return 6; case 25: return 7; case 26: return 7; case 27: return 7; case 28: return 7; case 29: return 8; case 30: return 8; case 31: return 8; case 32: return 8; case 33: return 9; case 34: return 9; case 35: return 9; case 36: return 9; case 37: return 10; case 38: return 10; case 39: return 10; case 40: return 10; case 41: return 10; case 42: return 10; case 43: return 10; case 44: return 10; case 45: return 10; case 46: return 10; case 47: return 10; case 48: return 10; case 49: return 10; case 50: return 10; case 51: return 10; case 52: return 10; default: return 0;		
	}
}
void dealerPlay(){
	if(dealerTotal < 17)
	{
		dealer[j] = drawCard();
		cout << "The dealer draws a " + getCardDetails(dealer[j]) << endl;
		dealerTotal += getCardWeight(dealer[j]);
		cout << "Hand total: " << total << endl; 
		cout << "Dealer total: " << dealerTotal << endl;
		dealerPlay();
		return;		
	}
	if(dealerTotal > 21){
		cout << "Dealer buster.\nYou win!" << endl;
		return;
	}
	else{
		if(total > dealerTotal)
		{
			cout << "You win!" << endl;
		}
		if(total < dealerTotal)
		{
			cout << "You lose!" << endl;
		}
		else
		{
			cout << "Tie game!" << endl;
		}
	}
}
void play(){
	cout << "Draw or stay?" << endl;
	char q;
	cin >> q;
	if(q=='d' || q == 'y'){
		hand[i] = drawCard();
		cout << "You draw a " + getCardDetails(hand[i]) << endl;
		total += getCardWeight(hand[i]);
		cout << "Hand total: " << total << endl; 
		cout << "Dealer total: " << dealerTotal << endl; 
		i++;
		if(total>21)
		{
			cout << "BUSTED" << endl;
			return;
		}
		if(total==21)
		{
			cout << "BLACK JACK!" << endl;
			return;
		}
		play();
	}
	else
	{
		dealerPlay();	
	}


}
int main()
{
	cout << "Let's play blackjack!" << endl;
	hand[i] = drawCard();
	cout << "You draw a " + getCardDetails(hand[0]) << endl;
	i++;
	hand[i] = drawCard();
	cout << "You draw a " + getCardDetails(hand[1]) << endl;
	i++;
	total = getCardWeight(hand[0])+getCardWeight(hand[1]);
	
	dealer[j] = drawCard();
	cout << "The dealer draws a " + getCardDetails(dealer[0]) << endl;
	dealerTotal = getCardWeight(dealer[0]);

	cout << "Hand total: " << total << endl; 
	cout << "Dealer total: " << dealerTotal << endl; 
	
	j++;
	if(total == 21){
		cout << "BLACK JACK!" << endl;
		return 0;
	}
	else{
		play();
	}	
	return 0;
}