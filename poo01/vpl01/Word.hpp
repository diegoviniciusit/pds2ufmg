#ifndef WORD
#define WORD

#include <string>

using namespace std;

class Word {

public:

	string word;
	int count;

	Word();
    void setWord(string word);
    string getWord();
    int getCount();
	void incrementFreq();
};

#endif
