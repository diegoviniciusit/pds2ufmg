#include "WordCounter.hpp"
#include "Word.hpp"

using namespace std;

WordCounter::WordCounter(int num_words)
{
	this->words = new Word[num_words];
	this->size = 0;
}

WordCounter::~WordCounter()
{
    delete this->words;
}

void WordCounter::addWord(string word)
{
    for (int i = 0; i < this->size; i++) {
        if (this->words[i].getWord() == word) {
            this->words[i].incrementFreq();
            return;
        }
    }
    this->words[this->size].setWord(word);
    this->size++;
}

void WordCounter::print()
{
    Word aux;
    int wordIndex = 0;
    for (int i = 0; i < this->size; i++) {
        wordIndex = i;
        for (int j = i + 1; j < this->size; j++) {
            if (this->words[j].getWord().compare(this->words[wordIndex].getWord()) < 0) {
                wordIndex = j;
            }
        }
        aux = this->words[i];
        this->words[i] = this->words[wordIndex];
        this->words[wordIndex] = aux;
        cout << this->words[i].getWord() << ' ' << this->words[i].getCount() << ' ';
    }
}