#include <iostream>
#include <string>
#include <random>
using namespace std;

string startList[] = { "Dr", "Dw", "L", "M", "Qu", "Thr", "Tr", "Tw", "Scr", "Sl", "Sm", "Sp", "Spl", "Squ", "Wh", "Y" };
string vowelList[] = { "a", "a", "a", "e", "e", "e", "i", "i", "o", "o", "u", "u", "ee", "ee", "oo", "oo" };
string endList[] = { "ck", "dd", "mf", "mp", "mpf", "ng", "nk", "pp", "rk", "rp", "zz", "aldo", "et", "le", "o", "ok" };

void wordMaker(string start, string vowel, string end) {
	cout << start << vowel << end << endl;
}

int main()
{
	for (int i = 0; i < 16; i++) {
		wordMaker(startList[rand() % 16], vowelList[rand() % 16], endList[rand() % 16]);
	}
}
