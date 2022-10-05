#include <iostream>
#include <map>
#include <set>
#include <iomanip>
#include <string>
#include <fstream>
#include <vector>
#include <random>
#include <list>
#include <iterator>
#include <time.h>
using namespace std;
//Doesn't work in replit but works in Eclipse IDE because they are different versions of C++
std::map<char, char> codeMap = { {'A', '`'}, {'a', '~'}, {'B', '1'}, {'b', '!'}, {'C', '2'}, {'c', '@'}, {'D', '3'},
			{'d', '#'}, {'E', '4'}, {'e', '$'}, {'F', '5'}, {'f', '%'}, {'G', '6'}, {'g', '^'}, {'H', '7'}, {'h', '&'},
			{'I', '8'}, {'i', '*'}, {'J', '9'}, {'j', '('}, {'K', '0'}, {'k', ')'}, {'L', '-'}, {'l', '_'}, {'M', '='},
			{'m', '+'}, {'N', '['}, {'n', '{'}, {'O', ']'}, {'o', '}'}, {'P', ';'}, {'p', ':'}, {'Q', ','}, {'q', '<'},
			{'R', L'ø'}, {'r', '>'}, {'S', '/'}, {'s', '?'}, {'T', '|'}, {'t', L'¢'}, {'U', L'£'}, {'u', L'¥'}, {'V', L'ƒ'},
			{'v', L'¿'}, {'W', L'¬'}, {'w', L'ß'}, {'X', L'µ'}, {'x', L'±'}, {'Y', L'€'}, {'y', L'†'}, {'Z', L'‡'}, {'z', L'þ'},
			{' ', '.'} };
map<char, char>::iterator codeIT;
fstream uncodedFile;
ofstream newFile("Encrypted.txt");
uncodedFile.open("Decrypted.txt");
char fileChar;
char newChar;
while(uncodedFile >> fileChar)
{
	for(codeIT = codeMap.begin(); codeIT != codeMap.end(); codeIT++)
	{
		if(codeIT->first == fileChar)
		{
			newChar = codeIT->second;
			newFile << newChar;
			}
		else
		{
			//do nothing
		}
		//cout << endl;
	}
}


//Second part
fstream codedFile;
codedFile.open("Decrypt.txt");
char codedChar;
char decodedChar;
	while(codedFile >> codedChar)
{
	for(codeIT = codeMap.begin(); codeIT != codeMap.end(); codeIT++)
	{
		if(codeIT->second == codedChar)
		{
			decodedChar = codeIT->first;
			cout << decodedChar;
		}
		else
		{
			//do nothing
		}
	}
}
uncodedFile.close();
codedFile.close();