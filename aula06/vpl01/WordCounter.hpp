#ifndef WORDCOUNT
#define WORDCOUNT

#include <map>
#include <vector>
#include <iostream>
#include <string>
#include "Word.hpp"

using namespace std;

class WordCounter {

public:

	Word *words;
	int size;

	WordCounter(int num_words);
	~WordCounter();
	void addWord(string word);
	void print();
};

#endif