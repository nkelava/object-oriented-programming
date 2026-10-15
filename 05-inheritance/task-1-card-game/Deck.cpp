#include "Deck.h"
#include <random>
#include <ctime>

void Deck::shuffle()
{
	static mt19937 generator(unsigned(time(NULL)));

	for (int i = 0; i < 2; i++)
		std::shuffle(deck.begin(), deck.end(), generator);
}

vector<Card> Deck::deal()
{
	vector<Card> hand(HANDSIZE);

	hand.assign(deck.begin(), deck.begin() + 10); // Deal first 10 cards to a player
	deck.erase(deck.begin(), deck.begin() + 10); // Erase those first 10 dealt cards from a deck

	return hand;
}

void Deck::print() const
{
	ostream_iterator<Card> os(cout, "\n");
	cout << "DECK: " << endl;
	copy(deck.begin(), deck.end(), os);
}



