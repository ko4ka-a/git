#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "Ru");
	ifstream file1("F1.txt");
	ofstream file2("F2.txt");
	string line;
	while (getline(file1, line)) 
	{	
		if (line.find(' ') == -1)
		{
			file2 << line << endl;
		}
	}
	file1.close();
	file2.close();
	string newline;
	ifstream openfile("F2.txt");
	if (openfile.is_open())
	{
		while (getline(openfile, newline))
		{
			cout << newline << endl;
		}
	}
	ifstream file3("F2.txt");
	string longestword;
	string word;
	while (file3 >> word) 
	{
		if (word.length() > longestword.length())
		{
			longestword = word;
		}	
	}
	file3.close();
	cout <<"Самое длинное слово: " << longestword;
	return 0;
}