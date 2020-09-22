#include "Word.hpp"

Word::Word ()
{
	this->word = "";
	this->count = 0;
}

void Word::setWord(string word)
{
    this->word = word;
    this->incrementFreq();
}

string Word::getWord()
{
    return this->word;
}

int Word::getCount()
{
    return this->count;
}

void Word::incrementFreq ()
{
	this->count += 1;
}